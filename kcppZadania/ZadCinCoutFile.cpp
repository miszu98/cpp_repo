#include <iostream>
#include<fstream>

using namespace std;


int main() {

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



























