#include <iostream>

using namespace std;

class Car {
private:
    string model;
    string color;
    int price;
public:
    Car() {
        model = "None";
        color = "None";
        price = 0;
    };
    Car(string _model, string _color) {
        model = _model;
        color = _color;
        price = 0;
    };
    Car(string _model, string _color, int _price) : model(_model), color(_color), price(_price) {};

    void info() {
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "price: " << price << endl;
    }
};


int main() {

    Car bmw = Car("M5", "black", 500000);
    bmw.info();
    Car mercedes_benz = Car("C63", "black");
    mercedes_benz.info();
    Car audi = Car();
    audi.info();

}

























