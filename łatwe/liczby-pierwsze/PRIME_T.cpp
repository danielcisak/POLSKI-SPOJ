#include <iostream>
#include <cmath>

std::string isPrime(int n);

int main()
{
	int testNum;
	std::cin >> testNum;
	for(int i = 0; i < testNum; i++)
	{
		int num;
		std::cin >> num;
		std::cout << isPrime(num) << '\n';
	}
	return 0;
}

std::string isPrime(int n)
{
	if (n == 1)
		return "NIE";
	for (int divider = 2; divider <= sqrt(n); divider++)
	{
		if (n % divider == 0)
			return "NIE";
	}
	return "TAK";
}
