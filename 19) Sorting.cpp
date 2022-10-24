#include <iostream>
using namespace std;

void insertionSort(int list[], int listLength)
{
	for (int i = 1; i < listLength; i++)
	{
		int j = i - 1;
		while (j >= 0 && list[j] > list[j + 1])
		{
			swap(list[j], list[j + 1]);
			j--;
		}
	}
}

int main()
{
	int list[5] = { 4, 178, 93, -18, 6 };
	cout << "Input array \n";
	for (int i = 0; i < 5; i++)
	{
		cout << list[i] << "\t";
	}

	insertionSort(list, 5);

	cout << "\n\nSorted array \n";
	for (int i = 0; i < 5; i++)
	{
		cout << list[i] << "\t";
	}

	return 0;
}