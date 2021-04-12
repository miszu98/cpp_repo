#include <iostream>

using namespace std;

string dec_to_bin(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

int main() {
   cout << dec_to_bin(15);
}



























