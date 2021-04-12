#include <iostream>

using namespace std;


enum code {
    Hello,
    World
};

code hello() {
    return Hello;
}

int main() {



    switch (hello()) {
        case Hello:
            cout << "Slowo Hello" << endl;
            break;
        case World:
            cout << "Slowo World" << endl;
            break;
    }

    return 0;
}