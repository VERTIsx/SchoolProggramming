//Hello world

#include <iostream>

using namespace std;

int main()
{
	int a, b, c, p;
	float d,dd;
	double f = 3.45;
	char znak = 'a';
	string imie = "jan";
	string nralb = "w65539";

	//std::cout << "hello world!\n";
	//cout << "witaj!" << endl;

	//d = 0.5;
	//cout << "wartosc d: " << d << endl;

	////Zad 1.
	//cout << "Numer albumu to: " << nralb << endl;

	////Zad 2.
	//int parzysta;
	//cout << "podaj liczbe: ", cin >> parzysta;
	//if (parzysta % 2 == 0) cout << "Liczba jest parzysta" << endl;
	//else cout << "Liczba jest nieparzysta" << endl;

	////Zad 3.
	//float l1, l2;
	//cout << "Liczba pierwsza: ", cin >> l1;
	//cout << "Liczba druga: ", cin >> l2;
	//if (l1 > l2) cout << "liczba 1 jest wieksza" << endl;
	//else if (l1 == l2) cout << "liczby są rowne" << endl;
	//else cout << "liczba 2 jest wieksza" << endl;

	//Zad 4.
	//float q, w, e, r;
	//float srednia;
	//cout << "Liczba pierwsza: ", cin >> q;
	//cout << "Liczba druga: ", cin >> w;
	//cout << "Liczba trzecia: ", cin >> e;
	//cout << "Liczba czwarta: ", cin >> r;
	//float suma = 0;
	//suma = q + w + e + r;
	//srednia = suma / 4;
	//cout << "Średnia arytmetyczna tych liczb wynosi: "<< srednia << endl;

	//Zad 5.
	double k, l;
	char wybor;
	cout << "podaj k: ", cin >> k, cout << "podaj l: ", cin >> l;
	cout << " + suma\n - roznica\n * mnozenie\n / dzielenie\n s srednia" << endl;
	cin >> wybor;
	switch (wybor)
	{
	case '+':
		cout << "suma: " << k + l << endl;
		break;

	case '-':
		cout << "roznica: " << k - l << endl;
		break;

	case '*':
		cout << "iloczyn: " << k * l << endl;
		break;

	case '/':
		if (l == 0) cout << "nie wolno dzielic przez 0" << endl;
		else cout << "iloraz: " << k / l << endl;
		break;

	case 's':
		cout << "srednia: " << (k+l)/2 << endl;
		break;

	default:
		cout << "nie ma takiej opcji!" << endl;
		break;
	}




	
}

