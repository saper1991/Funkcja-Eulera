#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int x, i, e;

	cout << "Podaj liczbê: ";
	cin >> x;

	i = 2;
	e = (int)sqrt(x);
	while (i <= e)
	{
		while (x % i == 0)
		{
			x /= i;
			e = (int)sqrt(x);
			cout << i << " ";
		}

		i++;
	}

	if (x > 1)
	{
		cout << x;
	}

	cin.ignore(2);

	return 0;
}