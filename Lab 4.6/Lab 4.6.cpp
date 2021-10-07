#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S, k;
	int n, i;
	P = 1;
	n = 1;
	while (n <= 20)

	{
		S = 0;
		i = 1;
		while (i <= n)
		{	
			k = n;
			S += k;
			i++;

		}
		P *= (n * n + S * S)/(n + 1);
		n++;

	}
	cout << P << endl;
	P = 1;
	n = 1;
	do
	{
		S = 0;
		i = 1;
		do
		{	k = n;
			S += k;
			i++;

		} while (i <= n);
		P *= (n * n + S * S) / (n + 1);
		n++;
	} while (n <= 20);
	cout << P << endl;
	P = 1;
	for (n = 1; n <= 20; n++)

	{
		S = 0;
		for (i = 1; i <= n; i++)
		{
			k = n;
			S += k;
		}
		P *= (n * n + S * S) / (n + 1);

	}
	cout << P << endl;
	P = 1;
	for (n = 20; n >= 1; n--)

	{
		S = 0;
		for (i = n; i >= 1; i--)
		{	
			k = n;
			S += k;	
		}
		P *= (n * n + S * S) / (n + 1);
	}
	cout << P << endl;
	return 0;
}