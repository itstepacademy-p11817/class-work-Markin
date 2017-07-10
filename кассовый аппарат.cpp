#include<iostream>
using namespace std;
int main()
{
	while (true)
	{
		int y = 0;
		cout << "choose an operation\n";
		cout << "1)sell\n";
		cout << "2)exit\n";
		cin >> y;
		if (y == 1)
		{

			int x = 50, n = 4, m = 12, t = 25, i = 0, a = 0, s = 0, f = 0, y = 0;
			cout << "list of a goods:\n";
			cout << "1.christmas tree\n";
			cout << "2.socks\n";
			cout << "3.santaclaus\n";
			cout << "4. Happy new year movie\n";

			cout << "ammount of the first point="; cin >> i;
			cout << "ammount of the second point= "; cin >> a;
			cout << "ammount of the third point="; cin >> s;
			cout << "ammount of the fourth point="; cin >> f;
			cout << "the total cost=\n " << x*i + n*a + m *s + t*f << "$\n";
		}
		else if (y == 2) return 0;
	}
}
	