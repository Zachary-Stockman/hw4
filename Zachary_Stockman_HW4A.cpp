/*
Zachary Stockman
COP2000 6:35-9:00pm
10-17-17
Description: HW3A
A program that outputs a menu about a gym's member fees and when you choose your member type then you are shown the compounded interest of the member type for 10 years (shows 1-10).
*/

#include <iostream>																						 //main library
#include <iomanip>																						 //library needed for fixed point notation thats used in the program
#include <cstdio>																						 //library needed for exit(0); thats used in the program
#include <string>

using namespace std;                                                                                     //required

void getRaceTimes(string &, double &);
void findWinner(string, string, string, double , double , double);
void welcome();
double raceAverage(double , double , double);
bool FindWinnerCheck;
string FirstRacersName,
SecondRacersName,
ThirdRacersName;
double FirstRacersTime,
SecondRacersTime,
ThirdRacersTime;

int main()																								 //main function
{
	string FirstRacersName,
		SecondRacersName,
		ThirdRacersName,
		racersName;
	double FirstRacersTime,
		SecondRacersTime,
		ThirdRacersTime,
		racersTime,
		RaceTimeAverage;
	welcome();
	getRaceTimes(racersName, racersTime);
	findWinner(FirstRacersName, SecondRacersName, ThirdRacersName, FirstRacersTime, SecondRacersTime, ThirdRacersTime);
	double RaceTimeAverageResult = raceAverage(FirstRacersTime, SecondRacersTime, ThirdRacersTime);

	system("pause");																				 //pause so it dont end instantly and waits for a keypress.																						 //ends program when done and returns to int main with zero saying everything has worked well.
}
void getRaceTimes(string &racersName, double &racersTime)
{
	static int printName = 1;
	while (printName <= 3)
	{
		if (printName = 1)
		{
			cout << "Please enter the racer's first name > ";
			cin >> racersName;

			cout << "Please enter the racer's time > ";
			cin >> racersTime;

			racersName = FirstRacersName;
			racersTime = FirstRacersTime;
			printName++;

		}
		if (printName = 2)
		{
			cout << "Please enter the racer's first name > ";
			cin >> racersName;

			cout << "Please enter the racer's time > ";
			cin >> racersTime;

			racersName = SecondRacersName;
			racersTime = SecondRacersTime;
			printName++;
		}
		if (printName = 3)
		{
			cout << "Please enter the racer's first name > ";
			cin >> racersName;

			cout << "Please enter the racer's time > ";
			cin >> racersTime;

			racersName = ThirdRacersName;
			racersTime = ThirdRacersTime;
			printName++;
		}

		/*while (racersTime <= 0);
		{
			cout << "Invalid time input...time input must be greater than 0";
			continue;
		}
		*/
		break;
	}
}


/*void getRaceTimesSecond(string &, double &)
	{
	if (SecondRacersTimeInput <= 0)
	{
		cout << "invalid input please try again";
	}
		cout << endl << "Please enter the racer's first name > ";
		cin >> SecondRacersNameInput;
		cout << endl << "Please enter the racer's time > ";
		cin >> SecondRacersTimeInput;
	}

void getRaceTimesThird(string &, double &)
	{
	if (ThirdRacersTimeInput <= 0)
	{
		cout << "invalid input please try again";
		}
		cout << endl << "Please enter the racer's first name > ";
		cin >> ThirdRacersNameInput;
		cout << endl << "Please enter the racer's time > ";
		cin >> ThirdRacersTimeInput;
	}
*/
void findWinner(string FirstRacersName, string SecondRacersName, string ThirdRacersName, double FirstRacersTime, double SecondRacersTime, double ThirdRacersTime)
{
	if (FirstRacersTime > SecondRacersTime && FirstRacersTime > ThirdRacersTime);
	{
		cout << "Congratulations" << FirstRacersName << "!!! You are the winner!!" << endl;
		cout << "***** Your winning time is: " << FirstRacersTime << " *****";
	}

	if (SecondRacersTime > FirstRacersTime && SecondRacersTime > ThirdRacersTime); 
	{
		cout << "Congratulations" << SecondRacersName << "!!! You are the winner!!" << endl;
		cout << "***** Your winning time is: " << SecondRacersTime << " *****";
	}
	if (ThirdRacersTime > FirstRacersTime && ThirdRacersTime > SecondRacersTime);
	{
		cout << "Congratulations" << ThirdRacersName << "!!! You are the winner!!" << endl;
		cout << "***** Your winning time is: " << ThirdRacersTime << " *****";
	}	

}

void welcome()
	{
	cout << "*****************************************************************" << endl <<
		"Welcome to Race Results Program" << endl <<
		"You are asked to enter the three racers names" << endl <<
		"and their associated race time." << endl <<
		"Please enter a real number for Race Time." << endl <<
		"Program Developed by : Zachary Stockman" << endl <<
		"*****************************************************************" << endl;
	}

double raceAverage(double FirstRacersTime, double SecondRacersTime, double ThirdRacersTime)
{
	double RaceTimeAverage;
	RaceTimeAverage = (FirstRacersTime + SecondRacersTime + ThirdRacersTime)/3;
	//RaceTimeAverage = RaceTimeAverage / 3;
	cout << endl << endl << "Overall Race Time Average: " << RaceTimeAverage;
	return RaceTimeAverage;
}