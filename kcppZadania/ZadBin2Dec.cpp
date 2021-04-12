#include <iostream>
#include <cmath>

using namespace std;


int bin_to_dec(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main() {
    cout << bin_to_dec(1111);

}
