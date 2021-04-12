#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setw(10);
    cout << "Hello" << endl;

    cout << setprecision(5) << 3.14159 << endl;

    cout << setfill('.') << setw(10);
    cout << "hello" << endl;

    double a = 3.1415926534;
    double b = 2006.0;
    double c = 1.0e-10;

    cout << "fixed:\n" << fixed;
    cout << a << '\n' << b << '\n' << c << '\n';

    cout << "scientific:\n" << scientific;
    cout << a << '\n' << b << '\n' << c << '\n';

    cout << hex << 70 << endl;
    cout << dec << 70 << endl;
    cout << oct << 70 << endl;

}



























