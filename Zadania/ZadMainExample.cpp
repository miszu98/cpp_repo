
#include <iostream>

using namespace std;

extern "C"  {
    void sayHello();
    int displayNumber();
}

int add(int a, int b) {
    return a + b;
}

int substract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}


int main() {
    cout << "Uzycie extern: " << endl;
    sayHello();
    cout << '\n';
    cout << displayNumber() << endl;
    cout << "Bez extern: " << endl;
    cout << add(5, 5) << endl;
    cout << substract(5, 5) << endl;
    cout << multiply(5, 5) << endl;
    return 0;
}

