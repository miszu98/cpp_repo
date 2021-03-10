#include <iostream>
#include "cstring"

using namespace std;

void found_seq(char s1[], char s2[]) {
    cout << strstr(s1, s2) << endl;
}

void get_index(char s1[], char s2[]) {
    cout << strspn(s1, s2) << endl;
}

int main() {
    char str[] = "Hello World";

    int i = 0;
    while (i < strlen(str)) {
        cout << "Letter: " << str[i] << " -> " << (int) str[i] << endl;
        i++;
    }

    char s2[] = "ma";
    char s1[] = "ala ma kota";
    found_seq(s1, s2);
    get_index(s1, s2);


    return 0;
}
