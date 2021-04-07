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
    }
    else {
        return true;
    }
}

int main() {
    cout << evenNumber(3) << endl;
    cout << evenNumberBits(3) << endl;

}


