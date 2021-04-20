#include <iostream>


using namespace std;

class Samochod {
    private:
        string kolor;
        string model;
        string marka;

    public:
        string pobierzKolor() {
            return kolor;
        }
        string pobierzModel() {
            return model;
        }
        string pobierzMarke() {
            return marka;
        }
        void ustawKolor(string _kolor) {
            kolor = _kolor;
        }
        void ustawModel(string _model) {
            model = _model;
        }
        void ustawMarke(string _marka) {
            kolor = _marka;
        }
        Samochod(string _kolor, string _model, string _marka) {
            kolor = _kolor;
            model = _model;
            marka = _marka;
        }
};


int main() {
    Samochod s = Samochod("black", "M5", "BMW");
    cout << s.pobierzMarke();
}


