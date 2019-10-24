/*Saleh Almata
C++ Fall 2019
Date:10,23,2019
Lab dessricptio: Write a number-guessing game in which the computer selects a random
number in the range of 0 to 100, and users get a maximum of 20 attempts to guess it. At
the end of each game, users should be told whether they won or lost, and then be asked
whether they want to play again. When the user quits, the program should output the
total number of wins and losses. To make the game more interesting, the program
should vary the wording of the messages that it outputs for winning, for losing, and for
asking for another game. Create 10 different messages for each of these cases, and use
random numbers to choose among them. This application should use at least one Do-
While loop and at least one Switch statement. Write your C++ code using good style and
documenting comments. You should use functions in your code as well. Your source
code file should be called Lab5.cpp.
*/
#include <iostream>;
#include <math.h>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

void wining()
{
	//count the number of wins
	int randomWin = rand() % 10 + 1;
	switch (randomWin)
	{
	case 1:
		cout << "congrats you win the game" << endl;
		break;
	case 2:
		cout << "you are so good wou win" << endl;
		break;
	case 3:
		cout << "Hooray! you win" << endl;
		break;
	case 4:
		cout << "Bravo! ylu are the winner of the game" << endl;
		break;
	case 5:
		cout << "Well done! you win" << endl;
		break;
	case 6:
		cout << "Yes! you got it" << endl;
		break;
	case 7:
		cout << "Wow! you are thher winner" << endl;
		break;
	case 8:
		cout << "Great ending! you win" << endl;
		break;
	case 9:
		cout << "Nice played! ytou win" << endl;
		break;
	case 10:
		cout << "Amazing! you win the game " << endl;
		break;
	}
}
void losses()
{
	int randomLoss = rand() % 10 + 1;
	switch (randomLoss)
	{
	case 1:
		cout << "Sorry you lost " << endl;
		break;
	case 2:
		cout << "Sorry you lost the game" << endl;
		break;
	case 3:
		cout << "Sorry you lost the game" << endl;
		break;
	case 4:
		cout << "Sorry you lost the game" << endl;
		break;
	case 5:
		cout << "Sorry you lost the game" << endl;
		break;
	case 6:
		cout << "Sorry you lost the game" << endl;
		break;
	case 7:
		cout << "Sorry you lost the game" << endl;
		break;
	case 8:
		cout << "Sorry you lost the game" << endl;
		break;
	case 9:
		cout << "Sorry you lost the game" << endl;
		break;
	case 10:
		cout << "Sorry you lost the game" << endl;
		break;
	}
}

void result(int wonCounts, int lostCounts)
{
	//display the results
	cout << "Number guessing games you have played:" << (wonCounts + lostCounts) << endl;
	cout << "Number gussing games you have won:" << wonCounts << endl;
	cout << "Number gussing games you have lost:" << lostCounts << endl;
}

void playagian()
{
	int randomWin = rand() % 10 + 1;
	switch (randomWin)
	{
	case 1:
		cout << "do you want to play agian press 'y' or 'Y' ? " << endl;
		break;
	case 2:
		cout << "do you want to play agian press 'y' or 'Y' ? " << endl;
		break;
	case 3:
		cout << "do you want to play agian press 'y' or 'Y' ? " << endl;
		break;
	case 4:
		cout << "do you want to play agian press 'y' or 'Y' ? " << endl;
		break;
	case 5:
		cout << "do you want to play agian press 'y' or 'Y' ? " << endl;
		break;
	case 6:
		cout << "do you want to play agian press 'y' or 'Y' ? " << endl;
		break;
	case 7:
		cout << "do you want to play agian press 'y' or 'Y' ? " << endl;
		break;
	case 8:
		cout << "do you want to play agian press 'y' or 'Y' ? " << endl;
		break;
	case 9:
		cout << "do you want to play agian press 'y' or 'Y' ? " << endl;
		break;
	case 10:
		cout << "do you want to play agian press 'y' or 'Y' ? " << endl;
		break;
	}
}

//void checkUserGuss(int gussValue,int randomValue, int wonCounts, int lostCounts)
int main()
{
	//variable declartions
	int randomValue;
	int attempts = 1;
	int gussValue;
	char ch = 'y';
	int wonCounts = 0;
	int lostCounts = 0;
	srand(time(NULL));

	randomValue = rand() % 100; //select a random number in the range of 0 and 100
	cout << "Guess the random number" << endl;
	do
	{
		
		cout << "Attempt" << attempts << ": "; //prompt the user gussing number
		cin >> gussValue;
		if (gussValue == randomValue) //if the user choose the right number
		{
			wonCounts++;//count the number of wins
			wining(); //function call to print win messages
			cout << "The computer generated random number: " << randomValue << endl;
		}
		else
		{
			attempts++; // incremet the attempts
		}
		if (attempts == 21) //display a random message when the user lost the game*/
		{
			lostCounts++; //count the number of losses
			losses(); //function call
			cout << "The computer generated random number:" << randomValue << endl;
		}
		if (attempts >= 21)
		{
			playagian(); //function call
			cout << "if you don't want to play agian press 'E' " << endl;
			cin >> ch;
			if (ch == 'y' || ch == 'Y')
			{
				randomValue = (rand() % 100);
				cout << "Guess the random number " << endl;
				attempts = 1;
			}
		}
	} while (ch == 'y' || ch == 'Y');

	result(wonCounts,lostCounts); //call function to display the results
	if (ch == 'E') //pause the system for a while
	{
		system("pause");
		return 0;
	}
}
