#include <iostream>

using namespace std;


void printArray(int array[]) {
    for (int x=0; x<= (sizeof(&array)/sizeof(array[0])); x++) {
        cout << array[x] << endl;
    }
}


int main() {
    int array[5] = {1,2,3,4,5};
    printArray(array);
}


