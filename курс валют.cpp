#include<iostream>
int main()
{
	while (true)
	{
		int x = 19000, y;
		std::cout << "dollar-rubl=" << x;
		std::cout << "                dollar(1) or rubl(2)?\n";
		std::cin >> y;
		if (y == 1)
		{
			int j = 0;
			std::cout << "           you choose dollar\n" << "enter your number\n";
			std::cin >> j;
			std::cout << "summa=" << j*x;
			std::cout << "               exit(0)?\n";
			std::cin >> y;
			

		}
		else if (y == 2)
		{
			int l = 0;
			std::cout << "you choose rubl\n" << "enter your number\n";
			std::cin >> l;
			std::cout << "summa=" << l / x;
			std::cout << "              exit(0)?\n";
			std::cin >> y;


		}
		else if (y == 0) break;
	}
}