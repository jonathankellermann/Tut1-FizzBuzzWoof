/*
Jonathan Kellermann
214502067
FizzBuzzWoof
*/

#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 20;i++)
	{
		if (i % 3 == 0)
		{
			cout << "Fizz" << endl;
		}
		else
		{
			cout << i << endl;
		}
		}
	return 0;
}