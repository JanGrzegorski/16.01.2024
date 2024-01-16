#include <iostream>
using namespace std;

struct Data
{
	unsigned int dd, mm, rr;
};
struct Pracownik
{
	string imie;
	string nazwisko;
	string stanowisko;
	Data data_urodzenia;
};



int main()
{
	Pracownik pracownik_nr1 = {
	 "Arkadiusz",
	 "Pieczarka",
	 "Murarz",
		{ 12 , 05 , 2000 }
	};
	Pracownik pracownik_nr2 = {
	 "Konrad",
	 "Pieczarka",
	 "Murarz",{ 30, 05, 2001 }
	};
	Pracownik pracownik_nr3 = {
	 "Staska",
	 "Pieczarka",
	 "Murarz",
	{ 02, 05, 2008 }
	};
	
	cout << pracownik_nr1.imie << endl;
	cout << pracownik_nr1.nazwisko << endl;
	cout << pracownik_nr1.stanowisko << endl;
	cout << pracownik_nr1.data_urodzenia.dd << pracownik_nr1.data_urodzenia.mm << pracownik_nr1.data_urodzenia.rr << endl;


	cout << pracownik_nr2.imie << endl;
	cout << pracownik_nr2.nazwisko << endl;
	cout << pracownik_nr2.stanowisko << endl;
	cout << pracownik_nr2.data_urodzenia.dd << pracownik_nr2.data_urodzenia.mm << pracownik_nr2.data_urodzenia.rr << endl;

	cout << pracownik_nr3.imie << endl;
	cout << pracownik_nr3.nazwisko << endl;
	cout << pracownik_nr3.stanowisko << endl;
	cout << pracownik_nr3.data_urodzenia.dd << pracownik_nr3.data_urodzenia.mm << pracownik_nr3.data_urodzenia.rr << endl;
	
	return EXIT_SUCCESS;
}
