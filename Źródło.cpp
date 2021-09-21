#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int ilosc_uczniow, wybrana_liczba;

	vector<int> liczby_nieparzyste, liczby_parzyste;
	
	cin >> ilosc_uczniow;

	for (int i = 0; i < ilosc_uczniow; i++)
	{
		cin >> wybrana_liczba;
		if (wybrana_liczba % 2 == 0)
			liczby_parzyste.push_back(wybrana_liczba);
		else
			liczby_nieparzyste.push_back(wybrana_liczba);
		
	}
	if (liczby_parzyste.size() == 1)
		cout << "Nowy uczeñ wybra³ numer: " << liczby_parzyste.front() << endl;
	else
		cout << "Nowy uczeñ wybra³ numer: " << liczby_nieparzyste.front() << endl;

	return 0;
}