#include <iostream>
using namespace std;

int main() {
    double c, x, y;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    double result = 3 * c * x + 2 * x * y;
    cout << "Result = " << result << endl;
    return 0;
}
