#include <iostream>;
using namespace std;
double szybkiePotegowanie(double a, int n) {
    double w = 1.0;
    while (n > 0) {
        if (n % 2 == 1) {
            w *= a;
        }
        a *= a;
        n /= 2;
    }
    return w;
}

int main() {
    double a;
    int n;
    cout << "Podaj podstawę (a): ";
    cin >> a;
    cout << "Podaj wykładnik (n): ";
    cin >> n;

    double wynik = szybkiePotegowanie(a, n);

    cout << "Wynik potęgowania szybkiego: " << wynik << endl;

    return 0;
}
