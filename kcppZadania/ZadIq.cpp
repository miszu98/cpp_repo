#include <iostream>

using namespace std;

int main() {

    int i;
    int arr[] = {1, 2, 3, 4};
    int* q = arr;

//    cout << i[q] << endl;
//    cout << q[i] << endl;

    for (i=0; i<4; i++) {
        cout << i[q] << " == ";
        cout << q[i] << endl;
    }

    return 0;
}
