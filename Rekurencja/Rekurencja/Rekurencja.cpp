#include <iostream>
using namespace std;

int suma(int n) {
	if (n < 1) return 0;
	else return n + suma(n - 1);
}

/*
string toBinary(int num) {
	if (num == 0) return "0";
	else if (num == 1) return "1";
	else {
		return (toBinary(num / 2) + toBinary(num % 2));
	}
}
*/

void konwersjabin(int dec) {
	if (dec > 0)
	{
		konwersjabin(dec / 2);
		cout << dec % 2;
	}
}

int NWD(int a, int b) {
	if (b != 0)
		return NWD(b, a % b);
	return a;
}

int fibbonacci(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return fibbonacci(n - 1) + fibbonacci(n - 2);
}

int silnia(int num) {
	if (num == 0) return 0;
	else if (num == 1) return 1;
	else return num * silnia(num - 1);
}

float pociag(float n) {
	if (n == 1) return 0;
	else if (n == 2) return 0.5;
	else return -pociag(n - 1) * pociag(n - 2);
}

int main()
{
	/*for (int i = 0; i <= 5; i++) {
		cout << "i= " << i << ", " << "suma: " << suma(i) << endl;
	}*/
	//konwersjabin(10);
	//cout << NWD(13, 5);
	//cout << fibbonacci(4);
	//cout << silnia(10);
	//cout << pociag(10);

	float n;
	cout << "podaj n: ", cin >> n;
	if (n > 0) cout << pociag(n);
}
