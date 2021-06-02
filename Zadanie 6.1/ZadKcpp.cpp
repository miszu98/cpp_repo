
#include <iostream>
#include <math.h>
#include <iomanip>
#include<fstream>
#define liczbaObrotow 10

using namespace std;

class ZadKcpp {
    class Zad1_1 {
    private:
        int add(int a, int b) {
            return a + b;
        }

        int substract(int a, int b) {
            return a - b;
        }

        int multiply(int a, int b) {
            return a * b;
        }
    public:
        void run() {
            cout << add(5, 5) << endl;
            cout << substract(5, 5) << endl;
            cout << multiply(5, 5) << endl;
        }
    };

    class Zad2_1 {
    private:
        int przezWartosc(int a) {
            return a;
        }

        int przezReferencje(int &a) {
            int n = a;
            return n;
        }

        int przezWskaznik(int *a) {
            int temp = *a;
            return temp;
        }

        int* tablica() {
            static int array[3] = {1, 2, 3};
            return array;
        }
    public:
        void run() {
            int a = 5;
            cout << przezWartosc(a) << endl;
            cout << przezReferencje(a) << endl;
            int *p = &a;
            cout << przezWskaznik(p) << endl;
            cout << tablica() << endl;
        }
    };

    class Zad2_2 {
    private:
        void printujTablice(int *tab, int rozmiar) {
            for(int i=0; i<rozmiar; i++) {
                cout<<"index: "<<i<<" -> "<<tab[i]<<endl;
            }
        }
    public:
        void run() {
            int tab[] = {5, 10, 15, 20, 25, 30};
            printujTablice(tab,sizeof(tab)/sizeof(tab[0]));
        }
    };

    class Zad3_1 {
    public:
        void run() {
            int a, b, c;
            a = 10;
            b = 20;
            c = 30;

            cout << "Zmienna a: " << &a << " Wartosc: " << a <<  endl;

            cout << "Zmienna b: " << &b << " Wartosc: " << b <<  endl;

            cout << "Zmienna c: " << &c << " Wartosc: " << c <<  endl;
        }
    };

    class Zad3_2 {
    public:
        void run() {
            int i;
            int arr[] = {1, 2, 3, 4};
            int* q = arr;

            //    cout << i[q] << endl;
            //    cout << q[i] << endl;

            for (i=0; i<4; i++) {
                cout << i[q] << " == ";
                cout << q[i] << endl;
            }
        }
    };

    class Zad3_3 {
    private:
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
    public:
        void run() {
            funkcja1();
            cout << "-----------------------------" << endl;
            funkcja2();
        }

    };

    class Zad3_4 {
    private:
        void f1(){
            cout<<"Pierwsza funkcja"<<endl;
        }

        void f2(){
            cout<<"Druga funkcja"<<endl;
        }

    public:
        void run() {
            int a;
            cout<<"Wybierz funkcje (1 lub 2): "<<endl;
            cin >> a;
            while (a != 1 && a != 2) {
                cout << "Zly wybor" << endl;
                cout << "Wybierz jeszcze raz (1 lub 2 )" << endl;
                cin >> a;
            }

            if (a == 1) {
                f1();
            }
            else if (a == 2) {
                f2();
            }

            cout<<"Inny sposob wybrania funkcji (1 lub 2): "<<endl;
            cin >> a;

            switch (a){
                case 1:
                    f1();
                    break;
                case 2:
                    f2();
            }
        }
    };

    class Zad3_5 {
    private:
        void OperatoryArytmetyczne() {
            int a = 0;
            cout << a << endl;
            a = a + 5;
            cout << a << endl;
            a = a * 5;
            cout << a << endl;
            a = a - 5;
            cout << a << endl;
            a = a / 5;
            cout << a << endl;
            a = a % 5;
            cout << a << endl;

        }

        void OperatoryPrzypisania() {
            int a = 0;
            cout << a << endl;
            a += 5;
            cout << a << endl;
            a *= 5;
            cout << a << endl;
            a -= 5;
            cout << a << endl;
            a /= 5;
            cout << a << endl;
            a %= 5;
            cout << a << endl;
        }
    public:
        void run() {
            OperatoryArytmetyczne();
            cout << "---------------------------" << endl;
            OperatoryPrzypisania();
        }
    };

    class Zad3_6 {
        // ...
    };

    class Zad3_7 {
    private:
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

        string dec_to_bin(int n)
        {
            string r;
            while (n != 0){
                r += ( n % 2 == 0 ? "0" : "1" );
                n /= 2;
            }

            string reverse_result;
            for (int i = r.length() - 1; i >= 0; i--) {
                reverse_result += r[i];
            }
            return reverse_result;
        }
    public:
        void run() {
            int choice;
            cout << "Co chcesz policzyc: \n1)Dec to bin\n2)Bin to dec\n";
            cin >> choice;

            int number;
            if (choice == 1) {
                cout << "Podaj liczbe do przeliczenia: " << endl;
                cin >> number;
                cout << "Wynik: " << number << " -> " << dec_to_bin(number) << endl;
            } else if (choice == 2) {
                cout << "Podaj liczbe do przeliczenia: " << endl;
                cin >> number;
                cout << "Wynik: " << number << " -> " << bin_to_dec(number) << endl;
            }
        }
    };

    class Zad4_0 {
    public:
        void run() {
            cout << setw(10);
            cout << "Hello" << endl;

            cout << setprecision(5) << 3.14159 << endl;

            cout << setfill('.') << setw(10);
            cout << "hello" << endl;

            double a = 3.1415926534;
            double b = 2006.0;
            double c = 1.0e-10;

            cout << "fixed:\n" << fixed;
            cout << a << '\n' << b << '\n' << c << '\n';

            cout << "scientific:\n" << scientific;
            cout << a << '\n' << b << '\n' << c << '\n';

            cout << hex << 70 << endl;
            cout << dec << 70 << endl;
            cout << oct << 70 << endl;

            cout << "------------------------------------------" << endl;

            cout<<"\n========================"<<endl;


            double wynik = 3 * a;

            cout<<"Wynik naszego dzialania: "<<setprecision(6)<<wynik<<" jest niepoprawny ale:"<<endl;
            wynik *= 2;
            cout<<"output:"<<setw(10)<<setprecision(6)<<wynik<<setw(7)<<"T:"<<setw(10)<<wynik<<endl;
            wynik *= 3;
            cout<<"output1:"<<setw(9)<<setprecision(4)<<wynik<<setw(7)<<"T:"<<setw(10)<<wynik<<endl;
            wynik *= 2;
            cout<<"output2:"<<setw(9)<<setprecision(4)<<wynik<<setw(7)<<"T:"<<setw(10)<<wynik<<endl;
            wynik /= 2.3;
            cout<<"output2:"<<setw(9)<<setprecision(4)<<wynik<<setw(7)<<"T:"<<setw(10)<<wynik<<endl;


            cout<<"\n========================"<<endl;
        }
    };

    class Zad4_1 {
    public:
        void run() {

            cout << "Wypisywanie na ekran" << endl;

            ofstream plik("C:\\Users\\micha\\CLionProjects\\C++\\text.txt");
            plik << "Text";
            plik.close();

            string text;
            ifstream odczyt("C:\\Users\\micha\\CLionProjects\\C++\\text.txt");
            odczyt >> text;
            cout << text;
            odczyt.close();
        }
    };

    class Zad4_2 {
    public:
        void run() {
            printf("Hello World\n");
            cout << "Hello World";
        }
    };

    class Zad4_3 {
    private:

        bool evenNumber(int num) {
            if (num % 2 == 0) {
                return true;
            } return false;
        }

        bool evenNumberBits(int num) {
            if (num & 1) {
                return false;
            } return true;
        }

        bool evenNumberOtherWay(int num) {
            return num % 2 == 0 ? true : false; // tylko w celu pokazania zapisu
            // sam zapis w tym przypadku mozna zastapic num % 2 == 0
        }

    public:
        void run() {
            cout << evenNumber(4) << endl;
            cout << evenNumberBits(2) << endl;
            cout << evenNumberOtherWay(4) << endl;
        }
    };

    class Zad4_4 {
    private:
        bool evenNumber(int num) {
            if (num % 2 == 0) {
                return true;
            } return false;
        }

        bool evenNumberBits(int num) {
            if (num & 1) {
                return false;
            } return true;
        }

        bool evenNumberOtherWay(int num) {
            return num % 2 == 0 ? true : false;
        }
    public:
        void run() {
            cout << "Podaj liczbe: ";
            int num;
            cin >> num;

            cout << "Ktorej funkcji uzywamy? : ";
            int opcja;
            cin >> opcja;

            switch (opcja) {

                case 1:
                    cout << "Wynik opcji pierwszej dla liczby " + to_string(num) + " : ";
                    cout << evenNumber(num) << endl;
                    break;
                case 2:
                    cout << "Wynik opcji drugiej dla liczby " + to_string(num) + " : ";
                    cout << evenNumberBits(num) << endl;
                    break;
                case 3:
                    cout << "Wynik opcji trzeciej dla liczby " + to_string(num) + " : ";
                    cout << evenNumberOtherWay(num) << endl;
                    break;
            }
        }
    };

    class Zad4_5 {
    private:
        void while_loop(){
            int i=0;
            cout<<"while postinkrementacja"<<endl;
            while(i<liczbaObrotow){
                cout<<i++<<endl;
            }

            i=0;
            cout<<"while preinkrementacja"<<endl;
            while(i<liczbaObrotow){
                cout<<++i<<endl;
            }
        }
        void do_while_loop() {
            int i=0;
            cout<<"do-while postinkrementacja"<<endl;
            do{
                cout<<i++<<endl;
            }while(i<liczbaObrotow);

            i=0;
            cout<<"do-while preinkrementacja"<<endl;
            do{
                cout<<++i<<endl;
            }while(i<liczbaObrotow);
        }
        int for_loop() {
            cout<<"\nFOR: break"<<endl;
            for(int i=0; i<liczbaObrotow; i++){
                if(i==1)
                    break;
                cout<<i<<endl;
            }
            cout<<"FOR: continue"<<endl;
            for(int i=0; i<liczbaObrotow; i++){
                if(i==1)
                    continue;
                cout<<i<<endl;
            }
            cout<<"FOR: return"<<endl;
            for(int i=0; i<liczbaObrotow; i++){
                if(i==1)
                    return i;
                cout<<i<<endl;
            }
        }
    public:
        void run() {
            while_loop();
            do_while_loop();
            cout << for_loop() << endl;
        }
    };

    class Zad4_6 {
    private:
        enum code {
            Hello,
            World
        };

        code hello() {
            return Hello;
        }
    public:
        void run() {
            switch (hello()) {
                case Hello:
                    cout << "Slowo Hello" << endl;
                    break;
                case World:
                    cout << "Slowo World" << endl;
                    break;
            }
        }
    };

    class Zad4_7 {
        // ...
    };

    class Zad5_1 {
        class Math{
        public:
            Math() {};
            int add(int a, int b);
            int substract(int a, int b);

        };

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

    public:
        void run() {
            Math math = Math();
            cout << math.add(5, 5) << endl;
            cout << math.substract(5, 5) << endl;
            Mathv2 mathv2 = Mathv2();
            cout << mathv2.add(5, 5) << endl;
            cout << mathv2.substract(5, 5) << endl;

            Person person = Person("Michal", "Malek");
            person.info();
        }
    };

    class Zad5_2 {
    private:
        struct Users {
            string login;
            string password;
        };
    public:
        void run() {
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
    };

    class Zad5_3 {
    private:
        union Unia{
            int first;
            float second;
        };
    public:
        void run() {
            Unia a, b;

            a.first = 1;
            cout << "a.first: " << a.first << " a.second: " << a.second << endl;
            a.second = 2;
            cout << "a.first: " << a.first << " a.second: " << a.second << endl;


            b.first = 3;
            cout << "b.first: " << b.first << " b.second: " << b.second << endl;
            b.second = 4;
            cout << "b.first: " << b.first << " b.second: " << b.second << endl;


        }
    };

    class Zad5_4a {
    private:
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
    public:
        void run() {
            Car bmw = Car("M5", "black", 500000);
            bmw.info();
            Car mercedes_benz = Car("C63", "black");
            mercedes_benz.info();
            Car audi = Car();
            audi.info();
        }
    };

    class Zad5_4b {
    private:
        struct Car {
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
    public:
        void run() {
            Car bmw = Car("M5", "black", 500000);
            bmw.info();
            Car mercedes_benz = Car("C63", "black");
            mercedes_benz.info();
            Car audi = Car();
            audi.info();
        }
    };

    class Zad5_6 {
    private:
        class Figura {
        public:
            virtual double pole();
            virtual double obwod();
        };

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
    public:
        void run() {
            Kwadrat kwadrat = Kwadrat(5);
            cout << "Kwadrat\n";
            cout << "Pole: " << kwadrat.pole() << endl;
            cout << "Obwod: " << kwadrat.obwod() << endl;
            cout << "--------------------------" << endl;

            Prostokat prostokat = Prostokat(5, 3);
            cout << "Prostokat\n";
            cout << "Pole: " << prostokat.pole() << endl;
            cout << "Obwod: " << prostokat.obwod() << endl;
            cout << "--------------------------" << endl;

            Trojkat trojkat = Trojkat(5, 10);
            cout << "Trojkat\n";
            cout << "Pole: " << trojkat.pole() << endl;
            cout << "Obwod: " << trojkat.obwod() << endl;
            cout << "--------------------------" << endl;

            Kolo kolo = Kolo(5);
            cout << "Kolo\n";
            cout << "Pole: " << kolo.pole() << endl;
            cout << "Obwod: " << kolo.obwod() << endl;
            cout << "--------------------------" << endl;
        }
    };

    public:
        void runZad1_1() {
            Zad1_1 zad11 = Zad1_1();
            zad11.run();
        }

        void runZad2_1() {
            Zad2_1 zad21 = Zad2_1();
            zad21.run();
        }

        void runZad2_2() {
            Zad2_2 zad22 = Zad2_2();
            zad22.run();
        }

        void runZad3_1() {
            Zad3_1 zad31 = Zad3_1();
            zad31.run();
        }

        void runZad3_2() {
            Zad3_2 zad32 = Zad3_2();
            zad32.run();
        }

        void runZad3_3() {
            Zad3_3 zad33 = Zad3_3();
            zad33.run();
        }

        void runZad3_4() {
            Zad3_4 zad34 = Zad3_4();
            zad34.run();
        }

        void runZad3_5() {
            Zad3_5 zad35 = Zad3_5();
            zad35.run();
        }

        void runZad3_7() {
            Zad3_7 zad37 = Zad3_7();
            zad37.run();
        }

        void runZad4_0() {
            Zad4_0 zad40 = Zad4_0();
            zad40.run();
        }

        void runZad4_1() {
            Zad4_1 zad41 = Zad4_1();
            zad41.run();
        }

        void runZad4_2() {
            Zad4_2 zad42 = Zad4_2();
            zad42.run();
        }

        void runZad4_3() {
            Zad4_3 zad43 = Zad4_3();
            zad43.run();
        }

        void runZad4_4() {
            Zad4_4 zad44 = Zad4_4();
            zad44.run();
        }

        void runZad4_5() {
            Zad4_5 zad45 = Zad4_5();
            zad45.run();
        }

        void runZad4_6() {
            Zad4_6 zad46 = Zad4_6();
            zad46.run();
        }

        void runZad5_1() {
            Zad5_1 zad51 = Zad5_1();
            zad51.run();
        }

        void runZad5_2() {
            Zad5_2 zad52 = Zad5_2();
            zad52.run();
        }

        void runZad5_3() {
            Zad5_3 zad53 = Zad5_3();
            zad53.run();
        }

        void runZad5_4a() {
            Zad5_4a zad54a = Zad5_4a();
            zad54a.run();
        }

        void runZad5_4b() {
        Zad5_4b zad54b = Zad5_4b();
        zad54b.run();
    }

        void runZad5_6() {
            Zad5_6 zad56 = Zad5_6();
            zad56.run();
        }
};


double ZadKcpp::Zad5_6::Figura::pole() {
    return 0;
}

double ZadKcpp::Zad5_6::Figura::obwod() {
    return 0;
}

int ZadKcpp::Zad5_1::Math::add(int a, int b){
    return a + b;
}

int ZadKcpp::Zad5_1::Math::substract(int a, int b) {
    return a - b;
}

