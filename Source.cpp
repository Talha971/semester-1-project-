/*#include <iostream>
#include <conio.h>
//#include <string>
#include <time.h>
#include <cstdlib>


using namespace std;

int main()
{
	system("COLOR 70");
	double win = 0, totalAmount, fees = 40;
	int dice1, dice2, count = 0, sod;
	char process;

	srand(time(0));
	cout << "\t\t\t\t\tWelcome to Game!  " << endl;
	cout << "\t\t\t\t Enter Total Amount you have $ : ";
	cin >> totalAmount;

	if (totalAmount < fees)
	{
		cout << "\n\t\t\t\t               SORRY     " << endl;
		cout << "\n\t\t\t\t You have not enough money to play." << endl << endl;

		return 0;
	}
	cout << "\t\t\t     Do you want to play Dice Game for " << fees << "$ only? " << endl;
	cout << "\t\t\t\t\tPress Y for yes : ";
	cin >> process;


	while (process == 'y' || process == 'Y')
	{
		system("CLS");
		totalAmount = totalAmount + win - fees;
		count = 1;
		win = 0;
		cout << endl;

		while (sod = 7)
		{
			cout << endl << endl;
			dice1 = (rand() % 6) + 1;
			dice2 = (rand() % 6) + 1;
			cout << "\t\t\t\t\t     Turn :  " << count << endl << endl;

			cout << "\t\t\t\t\t       " << dice1 << " | " << dice2 << endl << endl;
			sod = dice1 + dice2;
			cout << "\t\t\t\t\tSum of two dice : " << sod << endl << endl;

			win = win + sod;
			count++;

			if (sod == 7)
			{
				cout << "\t\t\t\t\t  Game is up!" << endl << endl;
				break;
			}
			else
			{
				cout << "\t\t\t\t\t Roll dice again ? " << endl;
				cout << "\t\t\t\t\t Press Y for yes : ";
				cin >> process;
			}
		}
		cout << endl;
		cout << "\t\t\t\t    Your Total Winning Is    : " << win << " $" << endl;
		cout << "\t\t\t\t Total Ammount You Have Left : " << totalAmount + win << " $" << endl;
		cout << "\t\t\t\t     Want To Make More Money ?   " << endl;
		cout << "\t\t\t\t      Press 'y' To Play Again    " << endl;
		cout << "\t\t\t\t         Press 'n' To Exit       ";
		cin >> process;
		if (process == 'n' || process == 'N')
		{
			system("CLS");
			cout << "\t\t\t       THANKYOU VERY MUCH " << endl << endl;
			cout << "\t\t\t CONGRATS Your Total Win Is : " << win << " $" << endl << endl << endl;
			break;
		}



	}
	return 0;
}
*/

#include <iostream>
#include <conio.h>
//#include <string>
#include <time.h>
#include <cstdlib>


using namespace std;

int main()
{
	system("COLOR 70");
	double win = 0, totalAmount, fees = 40;
	int dice1, dice2, count = 0, sod;
	char process;

	srand(time(0));
	cout << "\t\t\t\t\tWelcome to Game!  " << endl;
	cout << "\t\t\t\t   Fees of the game is " << fees << endl;
	cout << "\t\t\t\t Enter Total Amount you have $ : ";
	cin >> totalAmount;

	if (totalAmount < fees)
	{
		cout << "\n\t\t\t\t               SORRY     " << endl;
		cout << "\n\t\t\t\t You have not enough money to play." << endl << endl;

		return 0;
	}
	cout << "\t\t\t     Do you want to play Dice Game for " << fees << "$ only? " << endl;
	cout << "\t\t\t\t\tPress Y for yes : ";
	cin >> process;


	while ((process == 'y' || process == 'Y') && totalAmount >= fees)
	{
		system("CLS");
		totalAmount = totalAmount - fees;
		count = 1;
		win = 0;
		cout << endl;

		while (sod = 7)
		{
			cout << endl << endl;
			dice1 = (rand() % 6) + 1;
			dice2 = (rand() % 6) + 1;
			cout << "\t\t\t\t\t     Turn :  " << count << endl << endl;

			cout << "\t\t\t\t\t       " << dice1 << " | " << dice2 << endl << endl;
			sod = dice1 + dice2;
			cout << "\t\t\t\t\tSum of two dice : " << sod << endl << endl;

			win = win + sod;
			count++;

			if (sod == 7)
			{
				cout << "\t\t\t\t\t  Game is up!" << endl << endl;
				break;
			}
			else
			{
				cout << "\t\t\t\t\t Roll dice again ? " << endl;
				cout << "\t\t\t\t\t Press Y for yes : ";
				cin >> process;
			}
		}
		totalAmount = totalAmount + win;
		cout << endl;
		cout << "\t\t\t\t    Your Total Winning Is    : " << win << " $" << endl;
		cout << "\t\t\t\t Total Ammount You Have Left : " << totalAmount << " $" << endl;
		cout << "\t\t\t\t     Want To Make More Money ?   " << endl;
		cout << "\t\t\t\t      Press 'y' To Play Again    " << endl;
		cout << "\t\t\t\t         Press 'n' To Exit       ";
		cin >> process;

		if (totalAmount<fees)
		{
			cout << "\t\t\t\tSorry! You didn't have enough money." << endl;
			system("pause");
			break;
		}

	}

	system("CLS");
	cout << "\t\t\t       THANKYOU VERY MUCH " << endl << endl;

	return 0;
}



/*
using System;

namespace ConsoleApp2
{
	class Program
	{
		static void Main(string[] args)
		{
			int Range, T = 2;
			Console.Write("ENTER YOUR RANGE:");
			Range = Convert.ToInt32(Console.ReadLine());
			while (T <= Range)
			{
				bool isprime = true;
				for (int A = 2; A < T; A++)
				{
					if (T % A == 0)
					{
						isprime = false;
						break;
					}
				}
				if (isprime)
				{
					Console.WriteLine("\nprime number:{0} ", (T));
				}
				++T;
			}
			Console.ReadKey();
		}
	}
}*/