#include <iostream>

#include <ctime>

using namespace std;
void znach(int** n1, int n2, int n3);
void vivod(int** n1, int n2, int n3);

int main()

{

	int strings = 0;

	int stolbs = 0;

	cout << "Enter the dimensions of the two-dimensional array" << endl;

	cout << "Number of rows:";

	cin >> strings;

	cout << "Number of columns:";

	cin >> stolbs;

	int** chisla = new int* [strings];

	for (int i = 0; i < strings; i++)

	{
		chisla[i] = new int[stolbs];
	}

	znach(chisla, strings, stolbs);

	vivod(chisla, strings, stolbs);

	for (int i = 0; i < strings; i++)

	{
		delete[] chisla[i];
	}

	delete[] chisla;

	return 0;

}

void znach(int** n1, int n2, int n3)

{
	srand(time(0));

	for (int i = 0; i < n2; i++){
		for (int j = 0; j < n3; j++)
		{
			n1[i][j] = 10 + rand() % 40;
		}
	}

}

void vivod(int** n1, int n2, int n3)
{

	cout << endl;

	for (int i = 0; i < n2; i++)
	{
		cout << " ";

		for (int j = 0; j < n3; j++)
		{
			cout << n1[i][j] << " ";
		}
		cout << " " << endl;

	}

}