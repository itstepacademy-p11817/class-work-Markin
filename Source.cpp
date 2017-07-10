#include<iostream>
int main()
{
	int x = 0;
	int y = 0;
	
	std::cout << "width"; std::cin >> x;
	std::cout << "lenth"; std::cin >> y;

	for (int i = 0; i < y; i++) 
	{
		for (int t = 0; t < x; t++)
		{
			if (i == 0 || i == y - 1) 
			{
				std::cout << "*";
			}
			else if (t == 0 || t == x - 1) 
			{
				std::cout << "*";
			}
			else 
			{
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
	
	int a;
	std::cin >> a;
}
	
