#include <iostream>
using namespace std;
int main()
{
	int a <<cin<<"wpisz pierwsz¹ liczbê"<<endl;
	int b << cin << "wpisz drug¹ liczbê" << endl;
	if (a > b) {
		a -= b;
		cout << "wynik odejmowania: " + a;
	}
	else if (a < b) {
		b -= a;
		cout << "wynik odejmowania: " + b;
	}
}