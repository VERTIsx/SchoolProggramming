#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void zad1() {
	int tabl[10];

	for (int i = 0; i <= 9; i++)
	{
		tabl[i] = (i + 1) * 3;
		//cout << tabl[i] << " ";
	}
	
}

void zad2() {
	int tabl[10];

	for (int i = 0; i <= 9; i++)
	{
		tabl[i] = (i + 1) * 3;
		if (i % 2 == 1) cout << tabl[i] << " ";
	}


}

void zad3() {
	int a,c;
	int tab[5];

	cout<<"Podaj wartosc calkowita: ", cin >> a;

	for (int i = 4; i >= 0; i--)
	{
		tab[i] = a;
		a-=5;
	}
	cout << tab << " ";
}

void zad4() {
	srand(time(NULL));
	const int n = 10;
	int tab[n], i=0;

	while (i < n) {
		tab[i] = rand() % 74 - 23;  //-23 do 0 = 24, 1 do 50 to 50, 50+24=74
		i++;
	}
	i = 0;
	while (i < n) {
		cout << tab[i] << " ";
		i++;
	}
	i = 0;
	
	int min=100;
	while (i < n) {
		if (tab[i] < min) min = tab[i];
		i++;
	}
	cout <<"\nminimalna wartosc: " << min;

}

void zad5() {
	int tab[10], suma=0;
	cout << "wprowadz 1 wartosc tablicy: ", cin >> tab[0];
	cout << "wprowadz 2 wartosc tablicy: ", cin >> tab[1];
	
	for (int i = 2; i < 10; i++) {
		suma = tab[i - 2] + tab[i - 1];
		tab[i] = suma;
		
	}
	
	for (int j = 0; j < 10; j++) {
		cout << tab[j] << " ";
	}
}

void zad6() {
	int tab[20] = { 1,2,3,4,5,6,7,8,9,10 }, n = 10, j = 0;

	for (int i = 0; i < 10; i++) {
		tab[n] = tab[i];
		n++;
	}

	while (j < 20) {
		cout << tab[j] << " ";
		j++;
	}
}

void zad7() {
	int mac[3][3] = {
	{0,1,3},
	{1,5,6},
	{2,5,3}
	};

	int suma = 0;
	
	for (int i = 0; i < 3; i++) {
		suma += mac[i][i];
	}
	cout << suma;
}

void zad8() {
	int mac1[3][3] = {
	{4,1,3},
	{1,5,6},
	{2,5,3}
	};

	int mac2[3][3] = {
	{5,1,2},
	{2,3,5},
	{1,2,6}
	};

	int sum[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum[i][j] = mac1[i][j] + mac2[i][j];
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}


}

int main()
{
	//zad1();
	//zad2();
	//zad3();
	//zad4();
	//zad5();
	//zad6();
	//zad7();
	zad8();

	return 0;
}

