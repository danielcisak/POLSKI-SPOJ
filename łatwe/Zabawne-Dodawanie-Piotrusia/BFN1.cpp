#include <iostream>

bool is_palindrome(int n);
int reverse_number(int n);

int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		std::cin >> n;
		int counter = 0;
		while (!is_palindrome(n))
		{
			counter++;
			n += reverse_number(n);
		}
		std::cout << n << " " << counter << '\n';
	}
	return 0;
}

bool is_palindrome(int n)
{
	if (n == reverse_number(n))
		return true;
	return false;
}

int reverse_number(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum *= 10;
		int tmp = n % 10;
		n /= 10;
		sum += tmp;
	}
	return sum;
}
