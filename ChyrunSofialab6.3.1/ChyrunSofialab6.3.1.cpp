// ChyrunSofialab6.3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_06_3.cpp
// < Чирун Софія >
// Лабораторна робота № 6.3.1
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів   
// Варіант 18

#include <iostream>
#include <iomanip>
#include <time.h>

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
	    cout << endl;
}

int Sort(int* a, const int size)
{
	int l, s=0;
	for (int i = 0; i < size; i += 2)
	{
		l = a[i];
		a[i] = a[i + 1];
		a[i + 1] = l;
		s++;
		Print(a, size);

	}
	return s;
}

int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 26;
	int a[n];
	int Low = 3;
	int High = 92;
	int s;
	Create(a, n, Low, High);
	Print(a, n);
	s=Sort(a, n);
	cout << "CountStep=" << s;
	return 0;
}

