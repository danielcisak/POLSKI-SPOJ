#include <iostream>

int factorial(int n);

int main()
{
	int D;
	std::cin >> D;
	for (int i = 0; i < D; i++)
	{
		unsigned int n;
		std::cin >> n;
		if (n >= 10)
			n = 10;
		std::cout << factorial(n) / 10 << " " << factorial(n) % 10 << '\n';
	}
	return 0;
}

int factorial(int n)
{
	if (n == 0)
		return 1;
	return (n * factorial(n-1)) % 100;
}
