#include <iostream>

using namespace std;

int przezWartosc(int a) {
    return a;
}

int& przezReferencje() {
    static int n = 10;
    return n;
}

int * przezWskaznik() {
    static int n = 15;
    int *b = &n;
    return &n;
}

int* tablica() {
    static int array[3] = {1, 2, 3};
    return array;
}

int main() {

    return 0;
}


