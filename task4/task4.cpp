#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    char symbol;
    cout << "Symbol (N/g/z): "; cin >> symbol;

    if (symbol == 'N') {
        cout << "Ivanov Ivan" << endl;
    }
    else if (symbol == 'g') {
        if (a == 0 && b == 0 && c == 0) {
            cout << "x is any real number" << endl;
        }
        else if (a == 0 && b == 0) {
            cout << "No roots" << endl;
        }
        else if (a == 0) {
            cout << "x = " << -c / b << endl;
        }
        else {
            double D = b * b - 4 * a * c;
            if (D < 0) {
                cout << "No real roots" << endl;
            }
            else if (D == 0) {
                cout << "x = " << -b / (2 * a) << endl;
            }
            else {
                cout << "x1 = " << (-b + sqrt(D)) / (2 * a) << endl;
                cout << "x2 = " << (-b - sqrt(D)) / (2 * a) << endl;
            }
        }
    }
    else if (symbol == 'z') {
        double celsius;
        cout << "Temperature in Celsius: "; cin >> celsius;
        double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
        cout << fahrenheit << " F" << endl;
    }
    else {
        cout << "Unknown symbol" << endl;
    }

    return 0;
}
