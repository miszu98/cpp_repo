#include <iostream>

using namespace std;

void funkcja1()
{
    int *p;
    int x = 10;
    p = &x;

    cout << p++ << endl;
    cout << ++p << endl;
    cout << ++*p << endl;
    cout << ++(*p) << endl;
    cout << ++*(p) << endl;
    cout << *p++ << endl;
    cout << (*p)++ << endl;
    cout << *(p)++ << endl;
    cout << *++p << endl;
    cout << *(++p) << endl;

}


void funkcja2()
{
    int a, b, c;
    int *pointer;
    a = 0, b = 0, c = 0;

    cout <<"1. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

    b = 10;
    cout <<"2. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

    c = 20;
    cout <<"3. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

    pointer = &b;
    *pointer = 30;
    cout <<"4. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

    pointer = &a;
    *pointer = 40;
    cout <<"5. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

    pointer = &b;
    *pointer = 50;
    cout <<"6. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

    pointer = &c;
    *pointer = 60;
    cout <<"7. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

    pointer = &b;
    *pointer = 70;
    cout <<"8. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

    pointer = &a;
    *pointer = 80;
    cout <<"9. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

    pointer = &b;
    *pointer = 90;
    cout <<"10. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

}


int main()
{
//    funkcja1();
    funkcja2();
}
