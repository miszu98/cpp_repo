
#include <iostream>

using namespace std;

namespace example  {
    int a = 5;
    int b = 10;

    void test() {
      cout << "test method" << endl;
    }
}


using namespace example;

int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    test();
    cout << add(a, b) << endl;
    return 0;
}
