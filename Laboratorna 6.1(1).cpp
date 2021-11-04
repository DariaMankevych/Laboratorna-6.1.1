// Laboratorna 6.1(1).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Count(int* a, const int n)
{
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (abs(a[i]) % 13 != 0 && abs(a[i]) % 2 != 0) {
			count++;
		}
	}
	return count;
}
void Zero(int* a, const int n) {
	for (int i = 0; i < n; i++)
		if (abs(a[i]) % 13 != 0 && (a[i]% 2 != 0))
			a[i] = 0;
}
int Sum(int* a, const int n) {
	int S = 0;
	for (int i = 0; i < n; i++)
		if (abs(a[i]) % 13 != 0 && abs(a[i]) % 2 != 0)
			S += a[i];
	return S;
}
int main()
{
	srand((unsigned)time(NULL)); 

	const int n = 21;
	int a[n];
	int Low = 15;
	int High = 85;
	Create(a, n, Low, High);
	Print(a, n);

	cout << "S = " << Sum(a, n) << endl;
	cout << "Count = " << Count(a, n) << endl;

	Zero(a, n);
	Print(a, n);
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
