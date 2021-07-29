#include <iostream>

int collatz(int s, int counter);

int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		int s;
		std::cin >> s;
		std::cout << collatz(s, 0) << '\n';
	}
	return 0;
}

int collatz(int s, int counter)
{
	if (s == 1)
	{
		return counter;
	}
	else if (s % 2 != 0)
	{
		return collatz(3 * s + 1, ++counter);
	}
	else
	{
		return collatz(s / 2, ++counter);
	}
}
