#include <iostream>
#include <conio.h>

using namespace std;
int n, i, j, k;

void CetakEqual();
void CetakGaris();

int main()
{
	CetakEqual(); cout << "Pola Segitiga Sama Kaki\n"; CetakEqual();
	cout << endl << "Masukkan Panjang Pola : "; cin >> n;
	cout << endl; CetakGaris();

	for (i = 1; i <= n; i++)
	{
		for (j = n; j > i; j--)
		{
			cout << " ";
		}

		for (k = 1; k <= (2 * i - 1); k++)
		{
			cout << "*";
		}

		cout << endl;
	}

	CetakGaris();
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			cout << " ";
		}

		for (k = n; k >= (2 * i - n); k--)
		{
			cout << "*";
		}

		cout << endl;
	}

	CetakGaris();
	for (i = 1; i <= n; i++)
	{
		for (j = n; j > i; j--)
		{
			cout << " ";
		}

		for (k = 1; k <= (2 * i - 1); k++)
		{
			cout << "*";
		}

		cout << endl;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			cout << " ";
		}

		for (k = n; k >= (2 * i - n); k--)
		{
			cout << "*";
		}

		cout << endl;
	}

	_getch();
	return 0;
}

void CetakEqual()
{
	for (i = 0; i <= 26; i++)
	{
		cout << "=";
	}
	cout << endl;
}

void CetakGaris()
{
	for (i = 0; i <= (n * 2 - 1); i++)
	{
		cout << "-";
	}
	cout << endl;
}