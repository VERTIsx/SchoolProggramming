#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	//zad2.1
	/*
	int a, i;
	cout << "Liczba: " << endl;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cout << i << " "<<endl;
	}
	i = 0;
	
	cout << "while" << endl;
	while (i < a)
	{
		cout << i << " ";
		i++;
	}
	i = 0;
	
	do
	{
		cout << i << " " << endl;
		i++;
	} while (i < a);
	*/
	
	//zad2.2
	/*
	int b;
	do
	{
		cout<<"Podaj liczbe: ", cin >> b;
	} while (b >= 0);
	*/
	
	//zad2.3
	/*
	int c, iledod=0, ileujem=0, sumadod=0, sumaujem=0;

	for(int i=0; i<10; i++)
	{
		cout << "Podaj liczbe: ", cin >> c;
		
		if(c < 0){
			ileujem++;
			sumaujem += c;
		}

		if (c > 0) {
			iledod++;
			sumadod += c;
		}


	}
	cout << "Ilosc liczb dodatnich: " << iledod << "\nSuma liczb dodatnich: " << sumadod << endl;
	cout << "Ilosc liczb ujemnych: " << ileujem << "\nSuma liczb ujemnych: " << sumaujem << endl;
	*/

	//zad2.4
	/*
	int n,sumaparz=0;

	cout << "Podaj ilosc liczb: ", cin >> n;
	if (n > 0) {
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0) {
				sumaparz += i;
			}
		}
		cout << "Suma liczb parzystych w danym ciagu wynosi: " << sumaparz << endl;
	}
	else cout << "Liczba ilosc liczb jest mniejsza lub rowna zero" << endl;
	*/
	
	//zad2.5
	/*
	int n, sumaparz = 0, los;
	
	srand(time(NULL));

	cout << "Podaj ilosc liczb do wylosowania: ", cin >> n;
	if (n <= 55 && n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			los = rand() % 46 - 10;
			if(los%2==0){
				sumaparz += los;
			}
		}
		cout << "Suma liczb parzystych w danym ciagu wynosi: " << sumaparz << endl;
	}
	else cout << "ilosc nie jest w zakresie" << endl;
	*/

	//zad1.1
	/*
	int ilestud, punkty,suma=0;

	cout << "Podaj ilosc studentow: ", cin >> ilestud;
	if (ilestud > 0)
	{
		for (int i = 0; i < ilestud; i++)
		{
			cin >> punkty;
			suma += punkty;
		}
		cout << "Srednia wynosi: " << suma / ilestud << endl;
	}
	else cout << "Nie wystarczajaca ilosc studentow" << endl;
	*/

	//zad1.2
	/*
	float ilestud, punkty, suma = 0;

	cout << "Podaj ilosc studentow: ", cin >> ilestud;
	if (ilestud > 0)
	{
		for (int i = 0; i < ilestud; i++)
		{
			cout << "Podaj punktacje:", cin >> punkty;
			if (punkty >= 0 && punkty <= 100) {
				suma += punkty;
			}
			else {
				cout << "Przedzial punktow jest od 0 do 100" << endl;
				break;
			}

		}
		cout << "Srednia wynosi: " << suma / ilestud << endl;
	}
	else cout << "Nie wystarczajaca ilosc studentow" << endl;
	*/

	//zad1.3
	/*
	float ilestud, punkty, suma = 0;

	cout << "Podaj ilosc studentow: ", cin >> ilestud;
	if (ilestud > 0)
	{
		while(true)
		{
			cout << "Podaj punktacje:", cin >> punkty;
			if (punkty >= 0 && punkty <= 100) {
				suma += punkty;
			}
			else {
				cout << "Przedzial punktow jest od 0 do 100" << endl;
				break;
			}

		}
		cout << "Srednia wynosi: " << suma / ilestud << endl;
	}
	else cout << "Nie wystarczajaca ilosc studentow" << endl;
	*/

	//zad1.4
	/*
	float ilestud, punkty, suma = 0;

	cout << "Podaj ilosc studentow: ", cin >> ilestud;

	if (ilestud > 0)
	{
		do
		{
			cout << "Podaj punktacje:", cin >> punkty;
			if (punkty >= 0 && punkty <= 100) {
				suma += punkty;
			}
			else {
				cout << "Przedzial punktow jest od 0 do 100" << endl;
				break;
			}

		}while (true)
		cout << "Srednia wynosi: " << suma / ilestud << endl;
	}
	else cout << "Nie wystarczajaca ilosc studentow" << endl;
	*/

	//zad1.5
	/*
	cout << "1) " << endl;
	for (int i = 1; i <= 100; i++)
	{
		cout << i << " ";
	}

	cout << "\n2) " << endl;
	for (int i = 100; i >= 0; i--)
	{
		cout << i << " ";
	}

	cout << "\n3) " << endl;
	for (int i = 1; i <= 11; i++)
	{
		cout << 7*i << " ";
	}

	cout << "\n4) " << endl;
	for (int i = 20; i >= 0; i-=2)
	{
		cout << i << " ";
	}
	*/
}

