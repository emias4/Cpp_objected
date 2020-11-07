#include <iostream>

using namespace std;

class Zwierze {
public:
	//atrybuty
	string gatunek;
	string imie;
	int wiek;
	//metody
	void dodaj_zwierze() {
		cout << "Dodawanie nowego zwierzecia do bazy: " << endl;
		cout << " Podaj gatunek: ";
		cin >> gatunek;
		cout << " Podaj imie: ";
		cin >> imie;
		cout << " Podaj wiek: ";
		cin >> wiek;
	}
	void get_voice() {
		if (gatunek == "kot") cout << imie << " lat " << wiek << ": Miau! ";
		else if (gatunek == "pies") cout << imie << " lat " << wiek << ": Hau! ";
		else if (gatunek == "krowa") cout << imie << " lat " << wiek << ": Muuuu! ";
		else if (gatunek == "owca") cout << imie << " lat " << wiek << ": Beee! ";
		else if (gatunek == "œwinia") cout << imie << " lat " << wiek << ": Skuik! ";
		else cout << "Nieznay gatunek";
	}

};

int main() {

	Zwierze z1;
	Zwierze z2; 
	z1.dodaj_zwierze();
	z1.get_voice();
	
	z2.dodaj_zwierze();
	z2.get_voice();

	return EXIT_SUCCESS;
} 