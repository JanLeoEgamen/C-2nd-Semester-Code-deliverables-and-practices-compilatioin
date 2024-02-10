#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
using namespace std;

void createFile(string name, string content)
{
    fstream myfile;
    myfile.open(name + ".txt", ios:: out); // for inputting schedule in .txt file. overwriting
        
        if(myfile.is_open())
        {
            myfile << "Fila name: " << name << endl;
            myfile << "Content: " << content << endl;
            myfile.close();
        }

        cout << "File succesfully saved!";
}


void displayFile(string name)
{
    fstream myfile;
    string line;
    myfile.open(name + ".txt", ios:: in); // for  outputiing the .txt file
        
        if(myfile.is_open())
        {
               while(getline(myfile, line))
                {
                    cout << line << endl;
                }

            myfile.close();
        }


}


void appFile(string name, string content)
{
    fstream myfile;
    myfile.open(name + ".txt", ios:: app); // for appending schedule in .txt file
        
        if(myfile.is_open())
        {
            myfile << "Additional csontent: " << content << endl;
            myfile.close();
        }
        cout << "File succesfully saved!";

}

int countLine(string name)
{
    int count = 0;
    fstream myfile;
    string line;
    myfile.open(name + ".txt", ios:: in); // counting 
        
        if(myfile.is_open())
        {
               while(getline(myfile, line))
                {
                    count++; // count numbers
                }

            myfile.close();
        }

    return count;
}


void average(string name)
{
    double sum=0, avg=0, totalline=0;
fstream myfile;
    string line;
    myfile.open(name + ".txt", ios:: in); // calculating 
        
        if(myfile.is_open())
        {
               while(getline(myfile, line))
                {
                   int number = stoi(line); // converting string into int
                   sum = sum + number; // calculating sum
                    totalline++; // to know how many the dividend
                }

            myfile.close();
        }

    avg=sum/totalline; // ccalculating average

    cout << "The average of numbers stored in a file: " << avg;


}

int main()
{


    string filename, content;
    int choice;
do{
        system("cls");
        cout << "Filehandling Main Menu" << endl;
        cout << "1 - Create a new text file" << endl;
        cout << "2 - Display the content of text file" << endl;
        cout << "3 - Append new data to an existing text file" << endl;
        cout << "4 - Count the number of lines in a text file" << endl;
        cout << "5 - Calculate the average of numbers stored in a file" << endl;
        cout << "6 - Exit" << endl;
        cout << "Enter Choice: "; cin >> choice;
        
        cin.ignore();
        system("cls");
    switch (choice)
    {
            
        case 1: // create file
            cout << "Enter File name: "; getline(cin, filename); cin.ignore();
            cout << "Enter Enter content: ";getline(cin, content);

            createFile(filename, content);
            getch();
            break;
        
            
        case 2:// output file
            cout << "Enter File name: "; getline(cin, filename); 
            displayFile(filename);
            getch();
            
            break;
        
            
        case 3: // append
            
            cout << "Enter File name: "; getline(cin, filename); cin.ignore();
            cout << "Enter Enter Additional Content:"; getline(cin, content);

            appFile(filename,content);
            getch();
            break;
        
            
        case 4: // line counter
            cout << "Enter File name: "; getline(cin, filename); 
            cout << "Text file total line/s: "<< countLine(filename);
            getch();
            break;
        
            
        case 5: // average counter
        cout << "Enter File name: "; getline(cin, filename); 
            average(filename);
            getch();
            break;
        
            
        case 6:
            exit(0);
            break;
        
        
        default:
            break;
    }


}while(choice < 6);

    return 0;
}