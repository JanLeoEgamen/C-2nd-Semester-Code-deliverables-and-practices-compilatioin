#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    float salary;
    int hoursWorked;
};

void increaseSalary(Employee& employee) {
    if (employee.hoursWorked >= 12) {
        employee.salary += 150;
    } else if (employee.hoursWorked >= 10) {
        employee.salary += 100;
    } else if (employee.hoursWorked >= 8) {
        employee.salary += 50;
    }
}

void displayEmployees(const Employee employees[], int numEmployees) {
    cout << "Employees' Final Salaries:" << endl;
    for (int i = 0; i < numEmployees; i++) {
        cout << "Name: " << employees[i].name << ", Salary: $" << employees[i].salary << endl;
    }
}

struct Book {
    int accessionNumber;
    string author;
    string title;
    bool isIssued;
};

void addBook(Book library[], int& numBooks) {
    cout << "Enter the book information:" << endl;
    cout << "Accession Number: ";
    cin >> library[numBooks].accessionNumber;
    cout << "Author: ";
    cin.ignore();
    getline(cin, library[numBooks].author);
    cout << "Title: ";
    getline(cin, library[numBooks].title);
    library[numBooks].isIssued = false;

    numBooks++;
}

void displayBooksByAuthor(const Book library[], int numBooks) {
    string author;
    cout << "Enter the author's name: ";
    cin.ignore();
    getline(cin, author);

    cout << "Books by Author " << author << ":" << endl;
    bool found = false;
    for (int i = 0; i < numBooks; i++) {
        if (library[i].author == author) {
            cout << "Accession Number: " << library[i].accessionNumber << ", Title: " << library[i].title << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No books found by Author " << author << "." << endl;
    }
}

void displayNumberOfBooksByTitle(const Book library[], int numBooks) {
    string title;
    cout << "Enter the title: ";
    cin.ignore();
    getline(cin, title);

    int count = 0;
    for (int i = 0; i < numBooks; i++) {
        if (library[i].title == title) {
            count++;
        }
    }

    cout << "Number of books with title " << title << ": " << count << endl;
}

void displayTotalNumberOfBooks(int numBooks) {
    cout << "Total number of books in the library: " << numBooks << endl;
}

void issueBook(Book library[], int numBooks) {
    int accessionNumber;
    cout << "Enter the accession number of the book to issue: ";
    cin >> accessionNumber;

    bool found = false;
    for (int i = 0; i < numBooks; i++) {
        if (library[i].accessionNumber == accessionNumber) {
            if (library[i].isIssued) {
                cout << "Book with accession number " << accessionNumber << " is already issued." << endl;
            } else {
                library[i].isIssued = true;
                cout << "Book with accession number " << accessionNumber << " has been issued." << endl;
            }
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Book with accession number " << accessionNumber << " not found in the library." << endl;
    }
}

struct Date {
    int day;
    int month;
    int year;
};

void addDaysToDate(Date& date, int days) {
    date.day += days;

    while (date.day > 30) {
        date.day -= 30;
        date.month++;
        if (date.month > 12) {
            date.month = 1;
            date.year++;
        }
    }
}

void displayDate(const Date& date) {
    cout << "Date: " << date.day << "/" << date.month << "/" << date.year << endl;
}

int main() {
    const int maxEmployees = 10;
    Employee employees[maxEmployees];
    int numEmployees = 0;

    const int maxBooks = 100;
    Book library[maxBooks];
    int numBooks = 0;

    Date currentDate;
    cout << "Enter the current date:" << endl;
    cout << "Day: ";
    cin >> currentDate.day;
    cout << "Month: ";
    cin >> currentDate.month;
    cout << "Year: ";
    cin >> currentDate.year;

    int choice;
    do {
        cout << "=== Main Menu ===" << endl;
        cout << "1. Increase Employee Salaries" << endl;
        cout << "2. Display Employees' Final Salaries" << endl;
        cout << "3. Add a Book to the Library" << endl;
        cout << "4. Display Books by Author" << endl;
        cout << "5. Display Number of Books by Title" << endl;
        cout << "6. Display Total Number of Books in the Library" << endl;
        cout << "7. Issue a Book" << endl;
        cout << "8. Add Days to Current Date" << endl;
        cout << "9. Display Current Date" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                for (int i = 0; i < numEmployees; i++) {
                    cout << "Enter the details for Employee " << i + 1 << ":" << endl;
                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, employees[i].name);
                    cout << "Salary: $";
                    cin >> employees[i].salary;
                    cout << "Hours Worked per Day: ";
                    cin >> employees[i].hoursWorked;
                    increaseSalary(employees[i]);
                    cout << endl;
                }
                break;
            }
            case 2:
                displayEmployees(employees, numEmployees);
                break;
            case 3:
                addBook(library, numBooks);
                break;
            case 4:
                displayBooksByAuthor(library, numBooks);
                break;
            case 5:
                displayNumberOfBooksByTitle(library, numBooks);
                break;
            case 6:
                displayTotalNumberOfBooks(numBooks);
                break;
            case 7:
                issueBook(library, numBooks);
                break;
            case 8: {
                int daysToAdd;
                cout << "Enter the number of days to add: ";
                cin >> daysToAdd;
                addDaysToDate(currentDate, daysToAdd);
                break;
            }
            case 9:
                displayDate(currentDate);
                break;
            case 0:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    } while (choice != 0);

    return 0;
}