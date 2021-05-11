#include <iostream>
// zadanie 5.1 5.2 5.3

using namespace std;

struct Users {
    string login;
    string password;
};

int main() {

    Users A = {"A", "aa"};
    Users B = {"B", "bb"};

    Users users[3] = {A, B};
    for (int i=0; i<2; i++) {
        cout << users[i].login << endl;
        cout << users[i].password << endl;
    }

    cout << users[0].login << endl;
    users[0].login = "a";
    cout << users[0].login << endl;
    


}

