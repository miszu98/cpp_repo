#include <iostream>

using namespace std;

void pointerSwap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int A = 4;
    int B = 6;

    cout <<"Przed: A = "<< A <<" B = "<< B << endl;

    int *wskA = &A;
    int *wskB = &B;
    pointerSwap(wskA, wskB);
    cout <<"Po:    A = "<< A <<" B = "<< B << endl;
    pointerSwap(&A, &B);
    cout <<"Po:    A = "<< A <<" B = "<< B << endl;


    return 0;
}


