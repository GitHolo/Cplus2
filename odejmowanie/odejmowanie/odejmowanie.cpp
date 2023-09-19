#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "wpisz pierwsz¹ liczbê" << endl;
	cin >> a;
	cout << "wpisz drug¹ liczbê" << endl;
	cin >> b;
	if (a > b) {
		a -= b;
		cout << "wynik odejmowania: " << a;
	}
	else if (a < b) {
		b -= a;
		cout << "wynik odejmowania: " << b;
	}
	else {
		cout << "liczby s¹ równe";
	}
}