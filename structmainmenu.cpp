#include <iostream>
#include <cmath>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

struct Marks {
    int rollNo;
    string name;
    float chemMarks;
    float mathsMarks;
    float phyMarks;
};

struct Complex {
    float real;
    float imag;
};

struct StudentInfo {
    int rollNo;
    string name;
    int age;
    string address;
    int marks;
};

struct Customer {
    string name;
    int accountNumber;
    float balance;
};

struct Date {
    int day;
    int month;
    int year;
};

void printStudentNamesWithAge14(StudentInfo students[], int numStudents) {
    cout << "Names of students with age 14:" << endl;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].age == 14) {
            cout << students[i].name << endl;
        }
    }
}

void printStudentNamesWithEvenRollNo(StudentInfo students[], int numStudents) {
    cout << "Names of students with even roll number:" << endl;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNo % 2 == 0) {
            cout << students[i].name << endl;
        }
    }
}

void displayStudentDetails(StudentInfo students[], int numStudents, int rollNo) {
    bool found = false;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNo == rollNo) {
            cout << "Details of student with roll number " << rollNo << ":" << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Address: " << students[i].address << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student with roll number " << rollNo << " not found." << endl;
    }
}

void printCustomerNamesWithBalanceLessThan200(Customer customers[], int numCustomers) {
    cout << "Names of customers with balance less than $200:" << endl;
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].balance < 200) {
            cout << customers[i].name << endl;
        }
    }
}

void incrementBalanceOfCustomers(Customer customers[], int numCustomers) {
    cout << "Balance after adding $100 to customers with balance more than $1000:" << endl;
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].balance > 1000) {
            customers[i].balance += 100;
        }
        cout << customers[i].name << ": $" << customers[i].balance << endl;
    }
}

bool compareDates(Date date1, Date date2) {
    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "----- MAIN MENU -----" << endl;
        cout << "1. Store and print student details" << endl;
        cout << "2. Store and print details of 5 students (print details of student with roll no. 2)" << endl;
        cout << "3. Store and print details of 15 students" << endl;
        cout << "4. Add two distances in inch-feet" << endl;
        cout << "5. Enter marks of 5 students and calculate percentage" << endl;
        cout << "6. Add, subtract and multiply two complex numbers" << endl;
        cout << "7. Store and perform operations on student information" << endl;
        cout << "8. Store and perform operations on customer information" << endl;
        cout << "9. Compare two dates" << endl;
        cout << "0. Exit program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            break;
        }

        switch (choice) {
            case 1: {
                // Program to store and print roll no., name, age, and marks of a student
                StudentInfo student;

                cout << "Enter roll no.: ";
                cin >> student.rollNo;
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, student.name);
                cout << "Enter age: ";
                cin >> student.age;
                cout << "Enter marks: ";
                cin >> student.marks;

                cout << "Roll No.: " << student.rollNo << endl;
                cout << "Name: " << student.name << endl;
                cout << "Age: " << student.age << endl;
                cout << "Marks: " << student.marks << endl;

                break;
            }
            case 2: {
                // Program to store roll no., name, and age of 5 students and print details of student with roll no. 2
                const int numStudents = 5;
                StudentInfo students[numStudents];

                for (int i = 0; i < numStudents; i++) {
                    cout << "Enter details for student " << i + 1 << ":" << endl;
                    cout << "Roll No.: ";
                    cin >> students[i].rollNo;
                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, students[i].name);
                    cout << "Age: ";
                    cin >> students[i].age;
                    cout << endl;
                }

                cout << "Details of student with roll no. 2:" << endl;
                cout << "Roll No.: " << students[1].rollNo << endl;
                cout << "Name: " << students[1].name << endl;
                cout << "Age: " << students[1].age << endl;

                break;
            }
            case 3: {
                // Program to store and print roll no., name, age, address, and marks of 15 students
                const int numStudents = 15;
                StudentInfo students[numStudents];

                for (int i = 0; i < numStudents; i++) {
                    cout << "Enter details for student " << i + 1 << ":" << endl;
                    cout << "Roll No.: ";
                    cin >> students[i].rollNo;
                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, students[i].name);
                    cout << "Age: ";
                    cin >> students[i].age;
                    cout << "Address: ";
                    cin.ignore();
                    getline(cin, students[i].address);
                    cout << "Marks: ";
                    cin >> students[i].marks;
                    cout << endl;
                }

                cout << "Details of all students:" << endl;
                for (int i = 0; i < numStudents; i++) {
                    cout << "Roll No.: " << students[i].rollNo << endl;
                    cout << "Name: " << students[i].name << endl;
                    cout << "Age: " << students[i].age << endl;
                    cout << "Address: " << students[i].address << endl;
                    cout << "Marks: " << students[i].marks << endl;
                    cout << endl;
                }

                break;
            }
            case 4: {
                // Program to add two distances in inch-feet
                Distance distance1, distance2, sum;

                cout << "Enter the first distance:" << endl;
                cout << "Feet: ";
                cin >> distance1.feet;
                cout << "Inch: ";
                cin >> distance1.inch;

                cout << "Enter the second distance:" << endl;
                cout << "Feet: ";
                cin >> distance2.feet;
                cout << "Inch: ";
                cin >> distance2.inch;

                sum.feet = distance1.feet + distance2.feet;
                sum.inch = distance1.inch + distance2.inch;

                if (sum.inch >= 12.0) {
                    sum.feet += 1;
                    sum.inch -= 12.0;
                }

                cout << "Sum of distances: " << sum.feet << " feet " << sum.inch << " inch" << endl;

                break;
            }
            case 5: {
                // Program to enter marks of 5 students and calculate percentage
                const int numStudents = 5;
                Marks studentMarks[numStudents];

                for (int i = 0; i < numStudents; i++) {
                    cout << "Enter details for student " << i + 1 << ":" << endl;
                    cout << "Roll No.: ";
                    cin >> studentMarks[i].rollNo;
                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, studentMarks[i].name);
                    cout << "Chemistry Marks (out of 100): ";
                    cin >> studentMarks[i].chemMarks;
                    cout << "Mathematics Marks (out of 100): ";
                    cin >> studentMarks[i].mathsMarks;
                    cout << "Physics Marks (out of 100): ";
                    cin >> studentMarks[i].phyMarks;
                    cout << endl;
                }

                cout << "Percentage of each student:" << endl;
                for (int i = 0; i < numStudents; i++) {
                    float totalMarks = studentMarks[i].chemMarks + studentMarks[i].mathsMarks + studentMarks[i].phyMarks;
                    float percentage = (totalMarks / (3 * 100)) * 100;

                    cout << "Roll No.: " << studentMarks[i].rollNo << endl;
                    cout << "Name: " << studentMarks[i].name << endl;
                    cout << "Percentage: " << percentage << "%" << endl;
                    cout << endl;
                }

                break;
            }
            case 6: {
                // Program to add, subtract, and multiply two complex numbers
                Complex num1, num2, sum, diff, product;

                cout << "Enter the first complex number:" << endl;
                cout << "Real part: ";
                cin >> num1.real;
                cout << "Imaginary part: ";
                cin >> num1.imag;

                cout << "Enter the second complex number:" << endl;
                cout << "Real part: ";
                cin >> num2.real;
                cout << "Imaginary part: ";
                cin >> num2.imag;

                sum.real = num1.real + num2.real;
                sum.imag = num1.imag + num2.imag;

                diff.real = num1.real - num2.real;
                diff.imag = num1.imag - num2.imag;

                product.real = num1.real * num2.real - num1.imag * num2.imag;
                product.imag = num1.real * num2.imag + num1.imag * num2.real;

                cout << "Sum: " << sum.real << " + " << sum.imag << "i" << endl;
                cout << "Difference: " << diff.real << " + " << diff.imag << "i" << endl;
                cout << "Product: " << product.real << " + " << product.imag << "i" << endl;

                break;
            }
            case 7: {
                // Program to store and perform operations on student information
                const int numStudents = 10;
                StudentInfo students[numStudents];

                for (int i = 0; i < numStudents; i++) {
                    cout << "Enter details for student " << i + 1 << ":" << endl;
                    cout << "Roll No.: ";
                    cin >> students[i].rollNo;
                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, students[i].name);
                    cout << "Age: ";
                    cin >> students[i].age;
                    cout << "Address: ";
                    cin.ignore();
                    getline(cin, students[i].address);
                    cout << endl;
                }

                int option;
                cout << "1. Print names of all students with age 14" << endl;
                cout << "2. Print names of all students with even roll number" << endl;
                cout << "3. Display details of a student by roll number" << endl;
                cout << "Enter your option: ";
                cin >> option;

                switch (option) {
                    case 1:
                        printStudentNamesWithAge14(students, numStudents);
                        break;
                    case 2:
                        printStudentNamesWithEvenRollNo(students, numStudents);
                        break;
                    case 3: {
                        int rollNo;
                        cout << "Enter roll number: ";
                        cin >> rollNo;
                        displayStudentDetails(students, numStudents, rollNo);
                        break;
                    }
                    default:
                        cout << "Invalid option." << endl;
                }

                break;
            }
            case 8: {
                // Program to store and perform operations on customer information
                const int numCustomers = 10;
                Customer customers[numCustomers];

                for (int i = 0; i < numCustomers; i++) {
                    cout << "Enter details for customer " << i + 1 << ":" << endl;
                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, customers[i].name);
                    cout << "Account Number: ";
                    cin >> customers[i].accountNumber;
                    cout << "Balance: $";
                    cin >> customers[i].balance;
                    cout << endl;
                }

                int option;
                cout << "1. Print names of customers with balance less than $200" << endl;
                cout << "2. Add $100 to balance of customers with balance more than $1000" << endl;
                cout << "Enter your option: ";
                cin >> option;

                switch (option) {
                    case 1:
                        printCustomerNamesWithBalanceLessThan200(customers, numCustomers);
                        break;
                    case 2:
                        incrementBalanceOfCustomers(customers, numCustomers);
                        break;
                    default:
                        cout << "Invalid option." << endl;
                }

                break;
            }
            case 9: {
                // Program to compare two dates
                Date date1, date2;

                cout << "Enter date 1:" << endl;
                cout << "Day: ";
                cin >> date1.day;
                cout << "Month: ";
                cin >> date1.month;
                cout << "Year: ";
                cin >> date1.year;

                cout << "Enter date 2:" << endl;
                cout << "Day: ";
                cin >> date2.day;
                cout << "Month: ";
                cin >> date2.month;
                cout << "Year: ";
                cin >> date2.year;

                bool isEqual = compareDates(date1, date2);

                if (isEqual) {
                    cout << "Dates are equal." << endl;
                } else {
                    cout << "Dates are not equal." << endl;
                }

                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    }

    return 0;
}