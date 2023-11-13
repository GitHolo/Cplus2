#include<iostream>
using namespace std;

void rozkladNaCzynniki(int n) {
    int k = 2;

    cout << "Czynniki pierwsze liczby " << n << ": ";

    while (n > 1) {
        while (n % k == 0) {
            cout << k << " ";
            n = n / k;
        }
        k++;
    }

    cout << endl;
}

int main() {
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    rozkladNaCzynniki(liczba);

    return 0;
}
