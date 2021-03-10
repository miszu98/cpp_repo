#include <iostream>
#include "cstring"

using namespace std;

int main() {
    char str[] = "Hello World";

    int i = 0;
    while (i < strlen(str)) {
        cout << "Letter: " << str[i] << " -> " << (int) str[i] << endl;
        i++;
    }

    return 0;
}
