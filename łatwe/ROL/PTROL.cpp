#include <iostream>

int main()
{
	int testNumber;
	std::cin >> testNumber;
	for (int i = 0; i < testNumber; i++)
	{
		int howManyNumbers;
		std::cin >> howManyNumbers;
		int *numbers = new int [howManyNumbers];
		for (int j = 0; j < howManyNumbers; j++)
		{
			std::cin >> numbers[j];
		}
		for (int j = 0; j < howManyNumbers; j++)
		{
			int tmp;
			if (j == 0)
			{
				tmp = numbers[j];
				numbers[j] = numbers[j + 1];
			}
			else if (j == howManyNumbers - 1)
			{
				numbers[j] = tmp;
			}
			else
			{
				numbers[j] = numbers[j + 1];
			}
			std::cout << numbers[j] << " ";
		}
		delete [] numbers;
	}
	return 0;
}
