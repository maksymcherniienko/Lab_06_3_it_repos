#include<iostream>
#include<iomanip>
using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
}

void Sort(int* a, const int size) // метод обміну (бульбашки)
{
	for (int i = 1; i < size; i++) // лічильник ітерацій
	{
			int k = 0; // показник, чи були обміни
		for (int j = 0; j < size - i; j++) // номер поточного елемента
			if (a[j] < a[j + 1]) // якщо порушено порядок
			{ // - обмін елементів місцями
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				k = 1;
			}
		if (k == 0) return; // якщо обмінів - не було, то припиняємо процес
	}
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 10;
	int a[n];
	int Low = 1;
	int High = 31;
	Create(a, n, Low, High);
	cout << "array =        ["; Print(a, n); cout << "  ]" << endl;
	Sort(a, n);
	cout << "sorted array = ["; Print(a, n); cout << "  ]";
	return 0;
}