#include<iostream>
using namespace std;
int main() {
    int liczba;
    int tab[31];
    int i = 0;

    cout << "Podaj liczbe dziesietna: ";
    cin >> liczba;

    while (liczba != 0) {
        tab[i++] = liczba % 2;
        liczba = liczba / 2;
    }

    cout << "Liczba po zamianie na postac binarna: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << tab[j];
    }

    cout << endl;

    return 0;
}
