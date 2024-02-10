#include <iostream>
using namespace std;

struct phone
{
    string brand;
    string model;
    string color;
    float price;
};

void PrintPhone(phone cp)
{       cout << endl << "--------=============-----------" << endl;
        cout << "Brand: " << cp.brand << endl;
        cout << "Model: " << cp.model << endl;
        cout << "Color: " << cp.color << endl;
        cout << "Price: " << cp.price << endl;
}

struct user
{   
    string name;
    int age;
    phone p;
};

int main()
{

phone p1, p2, p3;

cout << "Enter Brand: ";
cin >> p1.brand;
cout << "Enter Phone Model: ";
cin >> p1.model;
cout << "Enter color: ";
cin >> p1.color;
cout << "Enter price: ";
cin >> p1.price;



cout << "Enter Brand: ";
cin >> p2.brand;
cout << "Enter Phone Model: ";
cin >> p2.model;
cout << "Enter color: ";
cin >> p2.color;
cout << "Enter price: ";
cin >> p2.price;


cout << "Enter Brand: ";
cin >> p3.brand;
cout << "Enter Phone Model: ";
cin >> p3.model;
cout << "Enter color: ";
cin >> p3.color;
cout << "Enter price: ";
cin >> p3.price;


PrintPhone(p1);
PrintPhone(p2);
PrintPhone(p3);


user user1;

user1.name ="Leo";
user1.age = 19;
user1.p = p1;  

return 0;
}