#include <iostream>


using namespace std;



class Math {
    public:
        Math() {};

    int add(int a, int b);
    int substract(int a, int b);

};

int Math::add(int a, int b) {
    return a + b;
}

int Math::substract(int a, int b) {
    return a - b;
}

class Mathv2 {
    public:
        Mathv2() {};

    int add(int a, int b) {
        return a + b;
    }
    int substract(int a, int b) {
        return a - b;
    }
};

class Person {
    private:
        string firstName;
        string lastName;
    public:
        Person(string _firstName, string _lastName) {
            firstName = _firstName;
            lastName = _lastName;
        }
        string getFirstName() {
            return firstName;
        }

        string getLastName(){
            return lastName;
        }

        void info() {
            cout << "First name: " << getFirstName() << endl;
            cout << "Last name: " << getLastName() << endl;
        }
};

int main() {
    Math math = Math();
    cout << math.add(5, 5) << endl;
    cout << math.substract(5, 5) << endl;
    Mathv2 mathv2 = Mathv2();
    cout << mathv2.add(5, 5) << endl;
    cout << mathv2.substract(5, 5) << endl;

    Person person = Person("Michal", "Malek");
    person.info();


    return 0;
}
