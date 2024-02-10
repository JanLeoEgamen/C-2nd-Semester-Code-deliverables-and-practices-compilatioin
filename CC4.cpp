#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float h, d, c=0, jump_ratio;
    float ezio_power = 1.00;

    cin >> h >> d;
    // Calculate the length of the hypotenuse using the Pythagorean theorem
    c = sqrt((h*h)+(d*d));
    // Calculate the jump ratio*/
    jump_ratio = h / d;

    // Check if Ezio survives or not
        cout << c << endl;
    if (jump_ratio >= ezio_power) {
        cout << "Escaped Successfully." << endl;
    } else {
        cout << "Busted, and dead." << endl;
    }

    return 0;
}

/* #include <iostream>
#include <cmath>

using namespace std;

int main() {
    float h, d, c, jump_ratio;
    float ezio_power = 1.00;

cin >> h >> d;
    // Calculate the length of the hypotenuse using the Pythagorean theorem
    c = sqrt(pow(h, 2) + pow(d, 2));
    cout << c << endl;

    // Calculate the jump ratio
    jump_ratio = h / d;

    // Check if Ezio survives or not
    cout << c << endl;
    if (jump_ratio >= ezio_power) {
        cout << "Escaped Successfully." << endl;
    } else {
        cout << "Busted, and dead." << endl;
    }

    return 0;
}



*/

