#include <iostream>
#include "math.h"
using namespace std;

class Figura {
public:
    virtual double pole();
    virtual double obwod();
};

double Figura::pole() {
    return 0;
}

double Figura::obwod() {
    return 0;
}


class Kwadrat : public Figura {
private :
    double bokA;

public:
    Kwadrat(double _bokA) {
        bokA = _bokA;
    }

    double pole() override {
        return bokA * bokA;
    }

    double obwod() override {
        return 4 * bokA;
    }

};


class Trojkat : public Figura {
private:
    double a;
    double h;
public:
    Trojkat(double a, double h) : a(a), h(h) {}

    double pole() override {
        return (double) (a * h) / 2;
    }

    double obwod() override {
        return a + h + (sqrt(pow(a, 2) + pow(h, 2)));
    }
};


class Kolo : public Figura {
private:
    double r;
public:
    Kolo(double r) : r(r) {}

    double pole() override {
        return M_PI * pow(r, 2);
    }

    double obwod() override {
        return 2 * M_PI * r;
    }
};

class Prostokat : public Figura {
private:
    double bokA;
    double bokB;
public:
    Prostokat(double bokA, double bokB) : bokA(bokA), bokB(bokB) {}

    double pole() override {
        return bokA * bokB;
    }

    double obwod() override {
        return (2 * bokA) + (2 * bokB);
    }
};



int main() {
    Kolo k = Kolo(4);
    cout << k.obwod() << endl;
}

























