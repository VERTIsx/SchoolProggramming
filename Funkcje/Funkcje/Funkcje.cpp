#include <iostream>
#include "Funkcje.h"
#include <string>

using namespace std;

float pkola(float r) {
    return 3.14 * r * r;
}

float pprostokata(float a, float b) {
    return a * b;
}

float ptrojkata(float a, float h) {
    return a * h / 2;
}

float pszescianu(float a) {
    return a * a * a;
}

float pwalca(float a, float b) {
    return b * a * a * 3.14;
}

void zad1() {
    cout << "Co chcesz obliczyc?\n1.Pole kola\n2.Pole prostokata\n3.Pole trojkata\n4.Pole szescianu\n5.Pole walca" << endl;
    int wybor;
    cout << "Podaj liczbe: ", cin >> wybor;
    float a, b;
    switch (wybor)
    {
    case 1:
        cout << "podaj promien: ", cin >> a;
        cout << pkola(a) << endl;
        break;

    case 2:
        cout << "podaj 1 bok: ", cin >> a;
        cout << "podaj 2 bok: ", cin >> b;
        cout << pprostokata(a, b) << endl;
        break;

    case 3:
        cout << "podaj bok: ", cin >> a;
        cout << "podaj wysokosc: ", cin >> b;
        cout << ptrojkata(a, b) << endl;
        break;

    case 4:
        cout << "podaj bok: ", cin >> a;
        cout << pszescianu(a) << endl;
        break;

    case 5:
        cout << "podaj bok: ", cin >> a;
        cout << "podaj wysokosc: ", cin >> b;
        cout << pwalca(a, b) << endl;
        break;

    default:
        cout << "nieprawidłowa liczba!" << endl;
        break;
    }
}

bool liczbapierwsza(int n){
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

void zad2() {
    int n;
    cout << "Podaj liczbe: ", cin >> n;

    if (liczbapierwsza(n))
        cout << "Liczba " << n << " jest pierwsza" << endl;
    else
        cout << "Liczba " << n << " nie jest pierwsza" << endl;
}

int binarna(int a) {
    string g;
    int b = 0;
    int tablica[100];
    while (a != 0) {
        tablica[b++] = a % 2;
        a = a / 2;
    }
    
    for (int j = b - 1; j >= 0; j--){
        g += to_string(tablica[j]);
    }

    return stoi(g); //stoi() - converting string to int
}


void zad3() {
    int a;
    cout << "Podaj liczbe: ", cin >> a;
    cout << "Postac binarna: " << binarna(a) << endl;
}

long long dwusilnia(int n) {
    long long wynik = 1;
    for (int i = n; i > 1; i -= 2)
        wynik = wynik * i;
    return wynik;
}

void zad4() {
    long long n;
    cout << "Podaj liczbe w przedziale od 0 do 30: ", cin >> n;
    if (n >= 0 && n <= 30) cout << "Dwusilnia wynosi: " << dwusilnia(n) << endl;
    else cout << "Liczba nie nalezy do przedzialu" << endl;
}




