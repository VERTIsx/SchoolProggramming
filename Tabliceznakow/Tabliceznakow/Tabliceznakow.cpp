#include <string>
#include <iostream>

using namespace std;

void zad1() {
	char zdanie[] = { "lot" }; //Inicjalizacja przez literał łańcuchowy
	//char zdanie[] = { 'l','o','t' }; //Inicjalizacja zbiorcza
}

void zad2() {
	int liczby[100];
	char znaki[100];
	//cin >> liczby; ta operacja jest niemozliwa dla innych tablic niz znakowych
	cin >> znaki;

}

void zad3() {
	char tab[] = "wiosna";
	cout<<strlen(tab);
}

void zad4() {
	//string tekst1,tekst2;
	//getline(cin, tekst1);
	//tekst2 = tekst1;
	//string tekst3 = tekst1 + tekst2;
	//cout <<"tekst1: "<< tekst1 << "\n" << "tekst2: " << tekst2 << endl;
	//cout << "tekst3" << tekst3 << endl;
	//cout << tekst3.size() << endl;

	char text1[20],text2[]="kot";
	cin.getline(text1, 20);
	strcpy_s(text1, text2); //kopiuje text2 do text1
	cout << text1 << endl;
	cout << text2 << endl;
	strcat_s(text1, text2); //laczy oba teksty
	cout << text1 << endl;
	cout << strlen(text1) << endl;
}

void zad5() {
	string ulica, dom;
	int skill, staz;
	cout<<"Podaj nazwe ulicy na ktorej mieszkasz: ", getline(cin, ulica);
	cout << "Podaj nr domu: ", getline(cin, dom);
	cout << "Na ile oceniasz swoje umiejetnosci programowania w skali [2-5]: ", cin >> skill;
	if (skill < 2 && skill > 5) {
		cout << "Podaj wartosc w przedziale!", cin >> skill;
	}
	cout << "Twoj staz programistyczny: ", cin>>staz;
	
	cout << "Adres: " << ulica << " " << dom << endl;
	cout << "Ocena: " << skill << endl;
	cout << "Staz: " << staz << " dni" << endl;
}

void zad6() {
	char samogloski[] = { 'a','e','i','o','u','y','\0'};
	char spolgloski[] = { 'b','c','d','f','g','h','j','k','l','m','n','p','r','s','t','w','x','z','\0' };
	
	int spolgloska=0, samogloska=0;

	char tekst[20];
	cout<<"podaj tekst: ",cin.getline(tekst, 20);
	for (int i = 0; i < strlen(tekst); i++) {
		for (int j = 0; j < strlen(samogloski); j++) {
			if (tekst[i] == samogloski[j]) {
				samogloska++;
			}
		}
		for (int k = 0; k < strlen(spolgloski); k++) {
			if (tekst[i] == spolgloski[k]) {
				spolgloska++;
			}
		}
	}

	cout << "Ilosc samoglosek: " << samogloska << "\nIlosc spolglosek: " << spolgloska << endl;
}

int main()
{
	//zad3();
	//zad4();
	//zad5();
	zad6();

}
