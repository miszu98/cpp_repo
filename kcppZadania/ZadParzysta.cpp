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

int main() {
    cout << evenNumber(4) << endl;
    cout << evenNumberBits(4) << endl;
    cout << evenNumberOtherWay(4) << endl;

}


