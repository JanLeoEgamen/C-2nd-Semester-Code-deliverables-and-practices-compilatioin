#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

// Function to create a new text file and write some text into it
void createFile() {
    string filename, content;
    cout << "Enter the file name: ";
    cin >> filename;
    cin.ignore(); // Ignore the newline character
    cout << "Enter the content: ";
    getline(cin, content);

    ofstream file(filename);
    if (file.is_open()) {
        file << content;
        file.close();
        cout << "File created and text written successfully." << endl;
    } else {
        cout << "Unable to create the file." << endl;
    }
}

// Function to open an existing text file and display its contents on the console
void displayFile() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open the file." << endl;
    }
}

// Function to count the number of lines in a text file
void countLines() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    ifstream file(filename);
    if (file.is_open()) {
        int count = 0;
        string line;
        while (getline(file, line)) {
            count++;
        }
        file.close();
        cout << "Number of lines in the file: " << count << endl;
    } else {
        cout << "Unable to open the file." << endl;
    }
}

// Function to count the number of words in a text file
void countWords() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    ifstream file(filename);
    if (file.is_open()) {
        int count = 0;
        string word;
        while (file >> word) {
            count++;
        }
        file.close();
        cout << "Number of words in the file: " << count << endl;
    } else {
        cout << "Unable to open the file." << endl;
    }
}

// Function to copy the contents of one text file to another
void copyFile() {
    string sourceFile, destinationFile;
    cout << "Enter the source file name: ";
    cin >> sourceFile;
    cout << "Enter the destination file name: ";
    cin >> destinationFile;

    ifstream source(sourceFile);
    ofstream destination(destinationFile);
    if (source.is_open() && destination.is_open()) {
        char ch;
        while (source.get(ch)) {
            destination << ch;
        }
        source.close();
        destination.close();
        cout << "File copied successfully." << endl;
    } else {
        cout << "Unable to open the files." << endl;
    }
}

// Function to find and replace a specific word in a text file
void findAndReplace() {
    string filename, searchWord, replaceWord;
    cout << "Enter the file name: ";
    cin >> filename;
    cout << "Enter the word to search: ";
    cin >> searchWord;
    cout << "Enter the word to replace: ";
    cin >> replaceWord;

    ifstream file(filename);
    if (file.is_open()) {
        string line;
        string content;
        while (getline(file, line)) {
            size_t pos = line.find(searchWord);
            while (pos != string::npos) {
                line.replace(pos, searchWord.length(), replaceWord);
                pos = line.find(searchWord, pos + replaceWord.length());
            }
            content += line + "\n";
        }
        file.close();

        ofstream outFile(filename);
        if (outFile.is_open()) {
            outFile << content;
            outFile.close();
            cout << "Word replaced successfully." << endl;
        } else {
            cout << "Unable to open the file." << endl;
        }
    } else {
        cout << "Unable to open the file." << endl;
    }
}

// Function to append new data to an existing text file
void appendToFile() {
    string filename, content;
    cout << "Enter the file name: ";
    cin >> filename;
    cin.ignore(); // Ignore the newline character
    cout << "Enter the content to append: ";
    getline(cin, content);

    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << content;
        file.close();
        cout << "Content appended successfully." << endl;
    } else {
        cout << "Unable to open the file." << endl;
    }
}

// Function to sort the lines of a text file in alphabetical order
void sortFile() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    ifstream file(filename);
    if (file.is_open()) {
        vector<string> lines;
        string line;
        while (getline(file, line)) {
            lines.push_back(line);
        }
        file.close();

        sort(lines.begin(), lines.end());

        ofstream outFile(filename);
        if (outFile.is_open()) {
            for (const string& sortedLine : lines) {
                outFile << sortedLine << endl;
            }
            outFile.close();
            cout << "File sorted successfully." << endl;
        } else {
            cout << "Unable to open the file." << endl;
        }
    } else {
        cout << "Unable to open the file." << endl;
    }
}

// Function to merge multiple text files into a single file
void mergeFiles() {
    int numFiles;
    cout << "Enter the number of files to merge: ";
    cin >> numFiles;

    vector<string> filenames;
    for (int i = 0; i < numFiles; i++) {
        string filename;
        cout << "Enter the file name: ";
        cin >> filename;
        filenames.push_back(filename);
    }

    string mergedFilename;
    cout << "Enter the name of the merged file: ";
    cin >> mergedFilename;

    ofstream mergedFile(mergedFilename);
    if (mergedFile.is_open()) {
        for (const string& filename : filenames) {
            ifstream file(filename);
            if (file.is_open()) {
                string line;
                while (getline(file, line)) {
                    mergedFile << line << endl;
                }
                file.close();
            } else {
                cout << "Unable to open the file: " << filename << endl;
            }
        }
        mergedFile.close();
        cout << "Files merged successfully." << endl;
    } else {
        cout << "Unable to create the merged file." << endl;
    }
}

// Function to split a large text file into smaller files of equal size
void splitFile() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    int numFiles;
    cout << "Enter the number of files to split into: ";
    cin >> numFiles;

    ifstream inputFile(filename);
    if (inputFile.is_open()) {
        // Determine the size of each split file
        inputFile.seekg(0, ios::end);
        int fileSize = inputFile.tellg();
        int splitSize = fileSize / numFiles;
        int remainingSize = fileSize % numFiles;

        for (int i = 0; i < numFiles; i++) {
            string splitFilename = filename + "_part" + to_string(i) + ".txt";
            ofstream splitFile(splitFilename);
            if (splitFile.is_open()) {
                int size = splitSize;
                if (i == numFiles - 1) {
                    // Add remaining size to the last split file
                    size += remainingSize;
                }

                char* buffer = new char[size];
                inputFile.read(buffer, size);
                splitFile.write(buffer, size);

                splitFile.close();
                delete[] buffer;
                cout << "Split file created: " << splitFilename << endl;
            } else {
                cout << "Unable to create the split file: " << splitFilename << endl;
            }
        }
        inputFile.close();
        cout << "File split successfully." << endl;
    } else {
        cout << "Unable to open the file." << endl;
    }
}

// Function to search for a specific string in a text file and display its line number(s)
void searchFile() {
    string filename, searchString;
    cout << "Enter the file name: ";
    cin >> filename;
    cin.ignore(); // Ignore the newline character
    cout << "Enter the string to search: ";
    getline(cin, searchString);

    ifstream file(filename);
    if (file.is_open()) {
        string line;
        int lineNumber = 0;
        bool found = false;
        while (getline(file, line)) {
            lineNumber++;
            if (line.find(searchString) != string::npos) {
                cout << "String found at line " << lineNumber << ": " << line << endl;
                found = true;
            }
        }
        file.close();
        if (!found) {
            cout << "String not found in the file." << endl;
        }
    } else {
        cout << "Unable to open the file." << endl;
    }
}

// Function to encrypt the contents of a text file using a simple encryption algorithm
void encryptFile() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    ifstream file(filename);
    if (file.is_open()) {
        string line;
        string content;
        while (getline(file, line)) {
            for (char& ch : line) {
                ch = ch + 1; // Shift each character by one position
            }
            content += line + "\n";
        }
        file.close();

        ofstream outFile(filename);
        if (outFile.is_open()) {
            outFile << content;
            outFile.close();
            cout << "File encrypted successfully." << endl;
        } else {
            cout << "Unable to open the file." << endl;
        }
    } else {
        cout << "Unable to open the file." << endl;
    }
}

// Function to decrypt the contents of a text file encrypted using the above algorithm
void decryptFile() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    ifstream file(filename);
    if (file.is_open()) {
        string line;
        string content;
        while (getline(file, line)) {
            for (char& ch : line) {
                ch = ch - 1; // Shift each character back by one position
            }
            content += line + "\n";
        }
        file.close();

        ofstream outFile(filename);
        if (outFile.is_open()) {
            outFile << content;
            outFile.close();
            cout << "File decrypted successfully." << endl;
        } else {
            cout << "Unable to open the file." << endl;
        }
    } else {
        cout << "Unable to open the file." << endl;
    }
}

// Function to read a CSV file and display its contents in tabular form
void readCSVFile() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            string cell;
            while (getline(ss, cell, ',')) {
                cout << cell << "\t";
            }
            cout << endl;
        }
        file.close();
    } else {
        cout << "Unable to open the file." << endl;
    }
}

// Function to calculate the average of numbers stored in a file
void calculateAverage() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    ifstream file(filename);
    if (file.is_open()) {
        double sum = 0.0;
        double count = 0.0;
        double number;
        while (file >> number) {
            sum += number;
            count++;
        }
        file.close();
        if (count > 0) {
            double average = sum / count;
            cout << "Average: " << average << endl;
        } else {
            cout << "No numbers found in the file." << endl;
        }
    } else {
        cout << "Unable to open the file." << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "----- Main Menu -----" << endl;
        cout << "1. Create a new text file and write some text into it" << endl;
        cout << "2. Open an existing text file and display its contents" << endl;
        cout << "3. Count the number of lines in a text file" << endl;
        cout << "4. Count the number of words in a text file" << endl;
        cout << "5. Copy the contents of one text file to another" << endl;
        cout << "6. Find and replace a specific word in a text file" << endl;
        cout << "7. Append new data to an existing text file" << endl;
        cout << "8. Sort the lines of a text file in alphabetical order" << endl;
        cout << "9. Merge multiple text files into a single file" << endl;
        cout << "10. Split a large text file into smaller files of equal size" << endl;
        cout << "11. Search for a specific string in a text file and display its line number(s)" << endl;
        cout << "12. Encrypt the contents of a text file" << endl;
        cout << "13. Decrypt the contents of a text file" << endl;
        cout << "14. Read a CSV file and display its contents in tabular form" << endl;
        cout << "15. Calculate the average of numbers stored in a file" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createFile();
                break;
            case 2:
                displayFile();
                break;
            case 3:
                countLines();
                break;
            case 4:
                countWords();
                break;
            case 5:
                copyFile();
                break;
            case 6:
                findAndReplace();
                break;
            case 7:
                appendToFile();
                break;
            case 8:
                sortFile();
                break;
            case 9:
                mergeFiles();
                break;
            case 10:
                splitFile();
                break;
            case 11:
                searchFile();
                break;
            case 12:
                encryptFile();
                break;
            case 13:
                decryptFile();
                break;
            case 14:
                readCSVFile();
                break;
            case 15:
                calculateAverage();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
        cout << endl;
    } while (choice != 0);

    return 0;
}