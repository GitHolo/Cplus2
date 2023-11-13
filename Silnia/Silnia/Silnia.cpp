#include<iostream>
using namespace std;

int silnia(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * silnia(n - 1);
    }
}

int main() {
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << liczba << "! = " << silnia(liczba) << endl;

    return 0;
}