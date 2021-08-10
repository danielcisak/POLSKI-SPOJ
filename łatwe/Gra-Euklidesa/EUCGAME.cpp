#include <iostream>

int NWD(int, int);

int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		int a, b;
		std::cin >> a >> b;
		std::cout << NWD(a, b) * 2 << "\n";
	}
	return 0;
}

int NWD(int a, int b)
{
	int bigger, smaller;
	
	if (a > b)
	{
		bigger = a;
		smaller = b;
	}
	else
	{
		bigger = b;
		smaller = a;
	}
	
	while (true)
	{
		int tmp = bigger % smaller;
		if (tmp == 0)
		{
			break;
		}
		bigger = smaller;
		smaller = tmp;
	}
	
	return smaller;
}
