#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	unsigned int n;
	setlocale(LC_CTYPE, "Polish");
	
	cout << "Podaj koniec zakresu szukania liczb pierwszych: " << endl<<endl;
start:
	cin >> n; //zakres z klawiatury
	if (n < 2) {
		cout << "Zakres wynosi [2,n]. Podaj liczbę większą lub równą 2." << endl << endl;
		goto start;
	}

	int m = n - 1;
	int *tab = new int[m]; //za pomocą wskaźnika rezerwujemy miejsce w pamięci tak aby zmieścił się cały nasz zakres liczb

	for (int i = 0; i < m; i++) {//wpisujemy do tablicy kolejne liczby naturalne zaczynając od 2.
		tab[i] = i+2;
	}

	for (int i = 2; i*i <= n; i++) {//pętlę zaczynamy od pierwszej liczby w tablicy, czyli 2. Inkrementujemy dopóki i^2 jest mniejsze bądź takie samo jak nasz zakres liczb.
		for (int j = 0; j <= m-1; j++) {
			if (tab[j] % i == 0 && tab[j]>i) {//jeśli element tablicy jest wielokrotnością liczby w zmiennej "i" to go zerujemy
				tab[j] = 0; 
			}
		}	
	}

	cout << "liczby pierwsze z zakresu [2," << n << "] to: " << endl << endl;
	for (int i = 0; i < m; i++) {
		if(tab[i]!=0)cout << tab[i] << ", "; //wyświetla liczbę z tablicy jeśli wcześniej jej nie wyzerowaliśmy.
	}
	cout << endl << endl;
	delete[] tab; //zwalniamy miejsce w pamięci
	return 0;
}
