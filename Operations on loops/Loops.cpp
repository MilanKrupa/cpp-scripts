#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
	int wybor;
	string login, haslo;
	int a; // zmienna a przechowuje informację o długości boku prostokąta
	int wylosowana, zgadywana = 0, ilosc_prob = 0; //wylosowana - to liczba pseudolosowa, zgadywana - to liczba jaką będzie wpisywał użytkownik, ilosc_prob - to ilość prób

poczatek:
	system("cls");
	cout << "1. Podprogram z petla while" << endl;
	cout << "2. Podprogram z petla do while" << endl;
	cout << "3. Podprogram z petla for" << endl;
	cout << "4. Wyjdz" << endl << endl;
	cout << "wybierz liczbe od 1 do 4: " << endl << endl;
	cin >> wybor;
	switch (wybor) {
	case 1:
		system("cls");
		// pętla while najpierw sprawdza warunek a następnie wykonuje zawarte w niej instrukcje. Oznacza to że jeśli warunek nie jest prawdziwy to pętla ta nie wykona się ani razu.
		// Składnia to:
		//	while(warunek){
		//	instrukcje;
		//	};

		cout << "------------------------------- konto: Administrator --------------------------------" << endl << endl;
		while (login != "admin" || haslo != "admin") {//petla będzie się wykonywała dopóki login lub hasło będą różne od "admin"
			cout << "podaj login:" << endl;
			cin >> login;
			cout << "podaj haslo:" << endl;
			cin >> haslo;

			if (login != "admin" || haslo != "admin") {
				cout << "bledny login lub haslo sproboj jeszcze raz" << endl;
			}
		}
		cout << "udalo sie! Tajna informacja to: ksiadz Robak to Jacek Soplica!" << endl;
		system("pause");
		goto poczatek;
		break;

	case 2:
		system("cls");
		// pętla do while najpierw wykonuje zawarte w niej instrukcje, a dopiero potem sprawdza warunek. Pętla ta wykona się co najmniej 1 raz.
		// Składnia to :
		//	do{
		//	instrukcje;
		//	}while(warunek);


		cout << "Wylosowalem liczbe z zakresu od 1 do 100," << endl;

		srand(time(NULL));
		wylosowana = rand() % 100 + 1; //na podstawie aktualnego czasu generowana jest liczba pseudolosowa z przedziału od 1 do 100 (dzięki modulo ze 100 + 1)

		do {
			ilosc_prob++; //licznik ilości prób

			cout << " zgadnij jaka ";
			cout << "(to twoja " << ilosc_prob << ". proba):" << endl;

		bladZgadywana: // skok bezwarunkowy jeśli wpisana liczba jest błędna
			cin >> zgadywana;
			if (zgadywana > 0 && zgadywana <= 100) { //warunek poprawności wpisanej liczby
				if (wylosowana == zgadywana)
					cout << "Zgadles!!! (za " << ilosc_prob << " razem)" << endl;

				if (wylosowana > zgadywana) // wskazówka jeśli wylosowana liczba jest większa
					cout << "Wiecej!" << endl;

				else if (wylosowana < zgadywana)// wskazówka jeśli wylosowana liczba jest mniejsza
					cout << "Mniej!" << endl;
			}
			else {
				cout << "wpisz liczbe od 1 do 100" << endl;
				goto bladZgadywana;
			}

		} while (zgadywana != wylosowana); //warunek mówiący że pętla ma się wykonywać dopóki liczba zgadywana jest różna od tej wylosowanej przez komputer
		system("pause");
		goto poczatek;
		break;

	case 3:
		system("cls");
		//w przeciwieństwie do poprzednich dwóch pętli, w pętli for ilość iteracji powinna być znana z góry lub wpisywana z klawiatury do zmiennej.
		// Składnia to:
		//	for(zmienna; warunek; inkrementacja/dekrementacja){
		//	instrukcje;
		//	};

		cout << "podaj bok prostokąta: " << endl;
	bladLiczbyA://jeśli liczba jest nieprawidłowa to wracamy w to miejsce
		cin >> a;
		if (a > 0 && a <= 50) {

			cout << " "; //jedna spacja żeby górny bok prostokąta nie rysował się od samego brzegu
			for (int i = a; i > 0; i--) {
				cout << "__"; //wyświetlanie górnego boku
			}
			cout << endl; //złamanie linii po wyświetleniu górnego boku
			for (int i = a; i > 0; i--) {
				cout << "|"; //wyświetlanie części lewego boku prostokąta
				for (int i = 0; i < 2 * a; i++) {
					cout << " ";// spacje wypełniające miejsce pomiędzy lewym a prawym bokiem prostokąta
				}
				cout << "|" << endl; //wyświetlanie części prawego boku prostokąta
			}

			//powyższa pętla rysuje jednocześnie - lewy bok, puste miejsce, prawy bok - wiersz po wierszu

			cout << " ";// dolny bok
			for (int i = a; i > 0; i--) {
				cout << "__";
			}
			cout << endl << endl;
			system("pause");
			goto poczatek;
		}
		else {
			cout << "wpisz liczbe z przedzialu od 1 do 50" << endl;
			goto bladLiczbyA; // i tutaj skok bezwarunkowy jeśli wpisana liczba jest nieprawidłowa
		}
		break;

	case 4:
		return 0;

	default:
		system("cls");
		goto poczatek;
	}

};
