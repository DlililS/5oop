#include <iostream>

using namespace std;

int* osvpam(int* arr, int size);

void zap(int* arr, int size);

void vivod(int* arr, int size);

int* osv(int* arr);

int main()

{

	int* arr = NULL;

	char fur = 0;

	do

	{

		int size = 0;

		cout << "Enter array size: ";

		cin >> size;

		arr = osvpam(arr, size);

		zap(arr, size);

		vivod(arr, size);

		arr = osv(arr);

		cout << "If you want to continue, press '1', close -press '0': ";

		cin >> fur;

	} while (fur != '0');

	return 0;

}

int* osvpam(int* arr, int size)

{

	arr = new int[size];

	return arr;

}

void zap(int* arr, int size)

{

	for (int i = 0; i < size; i++)

	{

		arr[i] = i;

	}

}

void vivod(int* arr, int size)

{

	for (int i = 0; i < size; i++)

	{

		cout << arr[i] << " ";

	}

	cout << endl;

}

int* osv(int* arr)
{

	delete[] arr;

	arr = NULL;

	return arr;

}