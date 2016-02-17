/*
Jonathan Kellermann
214502067
Tut 1-FizzBuzzWoof
*/

#include <iostream>

using namespace std;
//Main Loop
int main()
{
	//Divisible Flag
	bool isDivisible = false;
	//Loop from 1 to 20 
	for (int i = 1; i <= 20;i++)
	{
		//Fizz - Divisible by 3
		if (i % 3 == 0)
		{
			//Print Fizz
			cout << "Fizz ";
		}
		//Buzz - Divisible by 5
		if (i % 5 == 0)
		{
			//Print Buzz
			cout << "Buzz ";
		}
		//Divisible Flag
		if (isDivisible==false)
		{
			//Print Number if not divisible by 3 or 5
			cout << i << endl;
		}
		else
		{
			//Break Line
			cout << endl;
		}
		//Exit Loop
		}
	return 0;
}
//End