#include <iostream>

using namespace std;


void OperatoryArytmetyczne() {
    int a = 0;
    cout << a << endl;
    a = a + 5;
    cout << a << endl;
    a = a * 5;
    cout << a << endl;
    a = a - 5;
    cout << a << endl;
    a = a / 5;
    cout << a << endl;
    a = a % 5;
    cout << a << endl;

}

void OperatoryPrzypisania() {
    int a = 0;
    cout << a << endl;
    a += 5;
    cout << a << endl;
    a *= 5;
    cout << a << endl;
    a -= 5;
    cout << a << endl;
    a /= 5;
    cout << a << endl;
    a %= 5;
    cout << a << endl;
}



int main() {
    OperatoryArytmetyczne();
    OperatoryPrzypisania();
}




