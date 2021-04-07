
#include <iostream>

using namespace std;

bool evenNumber(int num) {
    if (num % 2 == 0) {
        return true;
    } return false;
}

bool evenNumberBits(int num) {
    if (num & 1) {
        return false;
    } return true;
}

bool evenNumberOtherWay(int num) {
    return num % 2 == 0 ? true : false;
}

void chooseOneOption() {
    cout << "Podaj liczbe: ";
    int num;
    cin >> num;

    cout << "Ktorej funkcji uzywamy? : ";
    int opcja;
    cin >> opcja;

    switch (opcja) {

        case 1:
            cout << "Wynik opcji pierwszej dla liczby " + to_string(num) + " : ";
            cout << evenNumber(num) << endl;
            break;
        case 2:
            cout << "Wynik opcji drugiej dla liczby " + to_string(num) + " : ";
            cout << evenNumberBits(num) << endl;
            break;
        case 3:
            cout << "Wynik opcji trzeciej dla liczby " + to_string(num) + " : ";
            cout << evenNumberOtherWay(num) << endl;
            break;
    }
}

int main() {
    chooseOneOption();
}