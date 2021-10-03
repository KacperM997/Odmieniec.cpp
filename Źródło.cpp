#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int ilosc_uczniow, liczba;

	cin >> ilosc_uczniow;

	vector<int> wszytkie_liczby, liczby_nieparzyste, liczby_parzyste;


	for (int i = 0; i < ilosc_uczniow; i++)
	{
		cin >> liczba;
		wszytkie_liczby.push_back(liczba);

		if (liczba % 2 == 0)
			liczby_parzyste.push_back(liczba);
		else
			liczby_nieparzyste.push_back(liczba);

	}


	if (liczby_parzyste.size() == 1)
	{
		cout << "Nowy uczeñ wybra³ numer: " << liczby_parzyste.front() << endl;
		for (int i = 0; i < ilosc_uczniow; i++)
		{
			if (wszytkie_liczby.at(i) == liczby_parzyste.front())
			{
				cout << "Nowy uczeñ stoi na miejscu: " << i + 1 << endl;
				break;
			}

		}
	}

	else
	{
		cout << "Nowy uczeñ wybra³ numer: " << liczby_nieparzyste.front() << endl;
		for (int i = 0; i < ilosc_uczniow; i++)
		{
			if (wszytkie_liczby.at(i) == liczby_nieparzyste.front())
			{
				cout << "Nowy uczeñ stoi na miejscu: " << i + 1 << endl;
				break;
			}

		}
	}


	return 0;
}