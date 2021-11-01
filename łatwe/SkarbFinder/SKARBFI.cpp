#include <iostream>
#include <cstdlib>

const int none = -1;
const int north = 0;
const int south = 1;
const int west = 2;
const int east = 3;

int main()
{
	int D;
	std::cin >> D;
	for (int i = 0; i < D; i++)
	{
		int N;
		std::cin >> N;
		int vertical = 0, horizontal = 0;
		for (int j = 0; j < N; j++)
		{
			int a, b;
			std::cin >> a >> b;
			switch (a)
			{
				case north: vertical += b; break;
				case south: vertical -= b; break;
				case west: horizontal += b; break;
				case east: horizontal -= b; break;
			}
		}
		if (vertical == 0 && horizontal == 0)
			std::cout << "studnia\n";
		else
		{
			int dirV, dirH;
			if (vertical > 0)
				dirV = north;
			else if (vertical < 0)
				dirV = south;
			else
				dirV = none;
			if (horizontal > 0)
				dirH = west;
			else if (horizontal < 0)
				dirH = east;
			else
				dirH = none;
			if (dirV == none)
				std::cout << dirH << " " << abs(horizontal) << '\n';
			else if (dirH == none)
				std::cout << dirV << " " << abs(vertical) << '\n';
			else
				std::cout << dirV << " " << abs(vertical) << '\n' << dirH << " " << abs(horizontal) << '\n';
		}
	}
	return 0;
}
