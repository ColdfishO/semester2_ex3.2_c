#include <iostream>
#include<locale.h>
#include "klasa.h"
using namespace std;
void autor(void) {
    cout << endl;
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "Autor programu: Simon Dudek\n\n";
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "\n\n";
}
int main() {
    double x, y;
    setlocale(LC_ALL, "");
    autor();
    cout << "Wpisz pierwsza liczbę zepoloną(część rzeczywista): ";
    cin >> x;
    cout << "(Część urojona): ";
    cin >> y;
    Tzespol pierwsza(x, y);
    cout << "Wpisz drugą liczbę zepoloną(część rzeczywista): ";
    cin >> x;
    cout << "(Część urojona): ";
    cin >> y;
    Tzespol druga(x, y);
    Tzespol wynik;
    wynik = pierwsza + druga;
    cout << "Wynik dodawania: ";
    wynik.wyświetl();
    wynik = pierwsza - druga;
    cout << "Wynik odejmowania: ";
    wynik.wyświetl();
    wynik = pierwsza * druga;
    cout << "Wynik mnożenia: ";
    wynik.wyświetl();
    wynik = pierwsza / druga;
    cout << "Wynik dzielenia: ";
    wynik.wyświetl();
    system("pause");
    return 0;
}