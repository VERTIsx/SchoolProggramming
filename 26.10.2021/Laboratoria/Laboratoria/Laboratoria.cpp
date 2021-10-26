// Laboratoria.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
	/*
	float a, b, c, delta;
	cout<< "Podaj a: ", cin >> a;
	cout << "Podaj b: ", cin >> b;
	cout << "Podaj c:", cin >> c;

	//zadanie 2
	
	if (a != 0) {
		delta=(b*b)-(4*a*c)
			if (delta == 0) {
				cout << "jedno rozwiazanie, x1= " << -b / (2 * a) << endl;
			}
			else if (delta > 0) {
				cout << "dwa rozwiazania: \n";
				cout << "x1 = " << (-b - sqrt(delta)) / (2 * a) << endl;
				cout << "x2 = " << (-b + sqrt(delta)) / (2 * a) << endl;
			}
			else
				cout << "rownanie nie ma rozwiazania" << endl;
		}
	}else {
	//zadanie 1
		if (b == 0)
		{
			if (c == 0)
				cout << "rownanie jest tozsamosciowe" << endl;
			else
				cout << "rownanie jest sprzeczne" << endl;
		}
		else
			cout << "rozwiazaniem rownania jest x równy: " << -c / b << endl;
	}
	*/

	/*
	//zadanie 4
		float fa, fb, fc, x;
		//fa:
		cout << "Podaj x: ", cin >> x;
		if (x > 0) {
			fa = 2 * x;
		}
		if else(x == 0) {
			fa = 0;
		}
		if else(x < 0) {
			fa = -3 * x;
		}
		if (x >= 1) {
			fb = x * x;
		}
		else fb = x;
		if (x > 2) {
			fc = 2 + x;
		}
		if else(x = 2) {
			fc = 8;
		}
		if else(x < 2) {
			fc = x - 4;
		}
		cout << "a(x) jest rowne: " << fa << "\nb(x) jest rowne: " << fb << "\nc(x) jest rowne: " << fc << endl;
		*/

	//Zadanie 5
	/*
	float x1, y1, z1, min, max, inne;
		cout << "Podaj x: ", cin >> x1;
		cout << "Podaj y: ", cin >> y1;
		cout << "Podaj z: ", cin >> z1;
		min = x1;
		max = x1;
			if (y1 < min) min = y1;
			if (z1 < min) min = z1;
			if (y1 > max) max = y1;
			if (z1 > max) max = z1;
			
			if (y1 == min && z1 == max) {
				inne = x1;
			}
			else if (z1 == min && y1 == max ) {
				inne = x1;
			}
			else if (x1 == min && z1 == max) {
				inne = y1;
			}
			else if (z1 == min && x1 == max) {
				inne = y1;
			}
			else if (x1 == min && y1 == max) {
				inne = z1;
			}
			else if (y1 == min && x1 == max) {
				inne = z1;
			}
			cout << min << " " << inne << " " << max << endl;
	*/	
	//Zadanie 6
	/*
	string odpd, odpa;
	cout << "Pada deszcz? " << endl;
	cin >> odpd;
	cout << "Jest autobus na przystanku? " << endl;
	cin >> odpa;
			if (odpd == "tak" && odpa == "tak") {
				cout << "Wez parasol, dostaniesz sie na uczelnie" << endl;
			}
			else if (odpd == "tak" && odpa != "tak") {
				cout << "Nie dostaniesz sie na uczelnie" << endl;
			}
			else if (odpd != "tak" && odpa == "tak") {
				cout << "Dostaniesz sie na uczelnie, milego dnia i pieknej pogody" << endl;
			}
	*/
	//Zadanie 7  To polecenie jest troche nielogiczne
	string odpz, odpp;
	cout << "Jest znizka na samochod? " << endl;
	cin >> odpz;
	cout << "Otrzymales podwyzke? " << endl;
	cin >> odpp;
			if (odpz != "tak" && odpp == "tak") {
				cout << "Mozesz kupic samochod!, znizki na samochod nie ma :(" << endl;
			}
			else if (odpz != "tak" && odpp != "tak") {
				cout << "Zakup samochod trzeba odlozyc na pozniej... Znizki na samochod nie ma" << endl;
			}
			else if (odpz == "tak" && odpp == "tak") {
				cout << "Mozesz kupic samochod!" << endl;
			}
}	