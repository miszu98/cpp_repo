
#include <iostream>
#include "ZadKcpp.cpp"

using namespace std;

class Interface {
    ZadKcpp zadKcpp;
public:
    Interface() {
        zadKcpp = ZadKcpp();
        cout << "//Kurs C++//" << endl;
        int section = chooseSection();
        cout << "Wybrales sekcje nr: " << section << endl;
        chooseExercise(section);
    }
private:
    int chooseSection() {
        int choice;
        cout << "Ktora sekcja Cie Interesuje?" << endl;
        cout << "1) Funkcja main\n"
                "2) Zwracanie przez funkcje\n"
                "3) Arytmetyka wskaznikow\n"
                "4) Operacje wejscia/wyjscia \n"
                "5) Klasy\n";
        cin >> choice;
        return choice;
    }

    void chooseExercise(int section) {
        int exercise;
        cout << "Wybierz zadanie ktore chcesz wyswietlic: " << endl;
        switch (section) {
            case 1:
                cout << "1) ZadMainExample" << endl;
                cin >> exercise;
                if (exercise == 1) {
                    zadKcpp.runZad1_1();
                }
                break;
            case 2:
                cout << "1) ZadZwracanie\n";
                cout << "2) ZadPrzekazywanieTablic\n";
                cin >> exercise;
                switch (exercise) {
                    case 1:
                        zadKcpp.runZad2_1();
                        break;
                    case 2:
                        zadKcpp.runZad2_2();
                        break;
                }
                break;
            case 3:
                cout << "1) ZadAdresowaniePamieci\n";
                cout << "2) ZadIq\n";
                cout << "3) ZadArytmetykaWskaznikow\n";
                cout << "4) ZadWywolanieFunkcji\n";
                cout << "5) ZadOperatoryPrzypisania\n";
                cout << "7) ZadWywolanieFunkcji\n";
                cin >> exercise;
                switch (exercise) {
                    case 1:
                        zadKcpp.runZad3_1();
                        break;
                    case 2:
                        zadKcpp.runZad3_2();
                        break;
                    case 3:
                        zadKcpp.runZad3_3();
                        break;
                    case 4:
                        zadKcpp.runZad3_4();
                        break;
                    case 5:
                        zadKcpp.runZad3_5();
                        break;
                    case 7:
                        zadKcpp.runZad3_7();
                        break;
                }
                break;
            case 4:
                cout << "0) LManipulacjaStrumieniemCout\n";
                cout << "1) ZadCinCoutFile\n";
                cout << "2) ZadCandCPP\n";
                cout << "3) ZadParzysta\n";
                cout << "4) ZadParzystaCase\n";
                cout << "5) ZadPetle\n";
                cout << "6) ZadSwitch\n";
                cin >> exercise;
                switch (exercise) {
                    case 0:
                        zadKcpp.runZad4_0();
                        break;
                    case 1:
                        zadKcpp.runZad4_1();
                        break;
                    case 2:
                        zadKcpp.runZad4_2();
                        break;
                    case 3:
                        zadKcpp.runZad4_3();
                        break;
                    case 4:
                        zadKcpp.runZad4_4();
                        break;
                    case 5:
                        zadKcpp.runZad4_5();
                        break;
                }
                break;
            case 5:
                cout << "1) ZadClass\n";
                cout << "2) ZadStruct\n";
                cout << "3) ZadUnia\n";
                cout << "41) ZadKlasaKonstruktor\n";
                cout << "42) ZadStructKonstruktor\n";
                cout << "6) ZadMetodyAbstrakcyjne\n";
                cin >> exercise;
                switch (exercise) {
                    case 1:
                        zadKcpp.runZad5_1();
                        break;
                    case 2:
                        zadKcpp.runZad5_2();
                        break;
                    case 3:
                        zadKcpp.runZad5_3();
                        break;
                    case 41:
                        zadKcpp.runZad5_4a();
                        break;
                    case 42:
                        zadKcpp.runZad5_4b();
                        break;
                    case 6:
                        zadKcpp.runZad5_6();
                        break;
                }
                break;
        }
    }
};

int main() {
    Interface interface = Interface();
}

