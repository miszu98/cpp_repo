#include <iostream>


using namespace std;

union Unia{
    int first;
    float second;
};


int main()
{

    Unia a, b;

    a.first = 1;
    a.second = 2;

    b.first = 3;
    b.second = 4;

    return 0;
}





























