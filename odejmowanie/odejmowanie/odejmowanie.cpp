#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "wpisz pierwsz� liczb�" << endl;
	cin >> a;
	cout << "wpisz drug� liczb�" << endl;
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
		cout << "liczby s� r�wne";
	}
}