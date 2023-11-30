#include <iostream>
using namespace std;

double funkcja(int n) {
    if (n == 1) {
        return 1.0;
    }
    else if (n == 2) {
        return 0.5;
    }
    else {
        return -funkcja(n - 1) * funkcja(n - 2);
    }
}

int main() {
    int n;

    cout << "Podaj nr wyrazu ciagu, ktorego wartosc chcesz policzyc: ";
    cin >> n;

    double wynik = funkcja(n);

    cout << n << " wyraz ciagu ma wartosc " << wynik << endl;

    return 0;
}
