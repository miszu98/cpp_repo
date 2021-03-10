
#include <iostream>
#include <string.h>

using namespace std;


void manipulacja_napisow() {
    string text1 = "Wszystko wiem";
    string text2 = "Nic nie wiem";

    if (text1 == text2) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    text1 += ", bo tak!";
    text2 += ", bo nie!";

    cout << text1 << endl;
    cout << text2;


}

int main() {

    manipulacja_napisow();

    return 0;
}