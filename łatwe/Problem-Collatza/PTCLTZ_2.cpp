#include <iostream>

int collatz(int s);

int main()
{
	int t; //liczba testow
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		int s; //testowana liczba
		std::cin >> s;
		std::cout << collatz(s) << '\n';
	}
	return 0;
}

int collatz(int s)
{
	if (s == 1)
	{
		return 0;
	}
	else if (s % 2 != 0)
	{
		return 1 + collatz(3 * s + 1);
	}
	else
	{
		return 1 + collatz(s / 2);
	}
}
