#include <iostream>

int main()
{
	int D;
	std::cin >> D;
	for (int i = 0; i < D; i++)
	{
		int a, b;
		std::cin >> a >> b;
		b = (b - 1) % 4 + 1;
		a %= 10;
		int multiplier = a;
		for (int j = 1; j < b; j++)
		{
			a = (a * multiplier) % 10;
		}
		std::cout << a << "\n";
	}
	return 0;
}
