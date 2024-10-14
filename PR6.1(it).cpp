// lab6.1(it).cpp
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* r, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		r[i] = Low + rand() % (High - Low + 1);
}
void Print(int* r, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << r[i];
	cout << endl;
}
int CountElements(int* r, const int size)
{
	int count_element = 0;
	for (int i = 0; i < size; i++)
		if (r[i] > 0 && r[i] % 4 != 0)
			count_element++;
	return count_element;
}
int Sum(int* r, const int size, int& count_element)
{
	int S = 0;
	count_element = 0;
	for (int i = 0; i < size; i++)
		if (r[i] > 0 && r[i] % 4 != 0)
		{
			S += r[i];
			count_element++;
		}
	return S;
}
void ReplaceElements(int* r, const int size)
{
	for (int i = 0; i < size; i++)
		if (r[i] < 0 || r[i] % 4 == 0)
			r[i] = 0;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 23; // масив із 23 елементів
	int r[n];
	int Low = -19;
	int High = 25;

	Create(r, n, Low, High);

	cout << "Start masiv:" << endl;
	Print(r, n);

	int count_element = CountElements(r, n);
	cout << "kilkistb elementiv (dodatni, ne kratni 4): " << count_element << endl;

	int sum = Sum(r, n, count_element);
	cout << "Suma elementiv (dodatni, ne kratni 4): " << sum << endl;

	ReplaceElements(r, n);
	
	cout << "Masiv pislya zaminu elementiv na 0 (dodanti ne kratni 4):" << endl;
	Print(r, n);
	return 0;
}