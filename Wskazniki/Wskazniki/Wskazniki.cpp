#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void zad1() {
    int* wsk, * wa, * wb, * wc; //definicja wskaznika
    int numer = 10, a, b, c = 5, suma;
    float srednia;
    wsk = &numer;
    cout << "Adres zadeklarowanej zmiennej: " << wsk << endl;

    cout << "Podaj wartosc zmiennej: ", cin >> a;
    wa = &a;
    cout << "Adres zmiennej: " << wa << endl;
    cout << "Wartosc zmiennej: " << *wa << endl;

    cout << "Podaj wartosc 2 zmiennej: ", cin >> b;
    wb = &b;
    cout << "Roznica 2 zmiennych wynosi: " << *wa - *wb << endl;

    wc = &c;
    cout << "3 Zmienna wynosi: " << *wc << endl;
    suma = *wa + *wb + *wc;
    srednia = suma / 3;
    cout << "Srednia 3 zmiennych wynosi: " << srednia << endl;
}

void zad2() {
    float tab[5];
    for (int i=0; i < 5; i++) {
        cout << "podaj liczbe: ", cin >> tab[i];
    }
    cout << "Adres pierwszego elementu tablicy: "<< tab+1 << endl << "Adres czwartego elementu tablicy: " << tab+4 << endl;

    srand(time(NULL));
    float tabl[10];
    int b,c,d;
    cout << "Podaj przedzial liczb od - do" << endl;
    cout << "OD: ", cin >> b;
    cout << "DO: ", cin >> c;
    d = c - b;
    for (int a = 0; a < 10; a++) {
        tabl[a] = rand() % d + b;
        cout << tabl[a];
        cout << "Adres "<< a+1 << " :" << tabl + a+1 << endl;
    }

}

void zad3() {
    float tab[5],srednia,suma=0;
    for (int i = 0; i < 5; i++) {
        cout << "podaj liczbe: ", cin >> tab[i];
        suma += tab[i];
    }
    srednia = suma / 5;
    cout << "srednia: " << srednia << endl;
    cout << "cyfry wieksze od sredniej: ";
    for (const int i : tab) {
        if (i > srednia) cout << i << " ";
    }
}

void zad4() {
    int* wa,a;
    cout<<"Podaj liczbe: ",cin >> a;
    wa = &a;
    cout << *wa * *wa << endl;
}

void zad5() {
    int* wa,* wp, *ww, a, potega,wynik=1;
    cout << "Podaj liczbe: ", cin >> a;
    cout << "Podaj potege: ", cin >> potega;
    wa = &a;
    wp = &potega;
    ww = &wynik;
    int i = *wp;
    while (i > 0) {
        *ww *= *wa;
        i--;
    }
    cout << *ww << endl;
}

void zad6() {
    int* wi, ilosc;
    char* wz, znak;
    cout << "Podaj ilosc powtorzen: ", cin >> ilosc;
    cout << "Podaj znak: ", cin >> znak;
    wi = &ilosc;
    wz = &znak;
    for (int i=*wi; i > 0; i--) {
        cout << *wz << " ";
    }
}

void zad7(int* wa, int* wb) {
    if (*wa < *wb) {
        cout << "Wartosc mniejsza: " << *wa << endl;
        cout << "Wskaznik wartosci mniejszej: " << wa << endl;
    }
    else{
        cout << "Wartosc mniejsza: " << *wb << endl;
        cout << "Wskaznik wartosci mniejszej: " << wb << endl;
    }
}

void zad8(int* wc, int* wd) {
    int a=*wc;
    *wc = *wd;
    *wd = a;
    cout << "--PO ZAMIANIE--" << endl;
    cout << "Pierwsza wartosc: " << *wc << endl;
    cout << "Druga wartosc: " << *wd << endl;
}

int main()
{
    //zad1();
    //zad2();
    //zad3();
    //zad4();
    //zad5();
    //zad6();
    
    /*
    int a, b;
    cout << "Podaj pierwsza wartosc: ", cin >> a;
    cout << "Podaj druga wartosc: ", cin >> b;
    int* wa = &a, * wb = &b;
    zad7(wa, wb);
    */

    int c, d;
    cout << "Podaj pierwsza wartosc: ", cin >> c;
    cout << "Podaj druga wartosc: ", cin >> d;
    int* wc = &c, * wd = &d;
    zad8(wc,wd);



}