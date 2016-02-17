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
			//Set Flag
			isDivisible = true;
		}
		//Buzz - Divisible by 5
		if (i % 5 == 0)
		{
			//Print Buzz
			cout << "Buzz ";
			//Set Flag
			isDivisible = true;
		}
		//Woof - Divisible by 7
		if (i % 5 == 0)
		{
			//Print Woof
			cout << "Woof ";
			//Set Flag
			isDivisible = true;
		}
		//Divisible Flag Check
		if (isDivisible==false)
		{
			//Print Number if not divisible by 3,5 or 7
			cout << i << endl;
		}
		else
		{
			//Break Line
			cout << endl;
		}
		isDivisible = false;
		//Exit Loop
		}
	return 0;
}
//End