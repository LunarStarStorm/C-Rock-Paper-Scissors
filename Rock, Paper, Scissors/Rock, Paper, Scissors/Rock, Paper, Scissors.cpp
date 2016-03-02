// Rock, Paper, Scissors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"
#include <vector>
using namespace std;


int main()
{
	//Vars
	vector<Player> listOfPlayers;
	int numOfPlayers = 0;
	int game = 0;

	//Player Intro
	cout << "Lets play Rock, Paper, Scissors!" << endl;
	cout << "Please enter the number of players(2-10)." << endl;
	cin >> numOfPlayers;

	if (numOfPlayers < 2 || numOfPlayers > 10)
	{
		cout << "The number you entered is invalid. Please enter a number between 2 and 10." << endl;
		cin >> numOfPlayers;
	}
	cout << "Please enter the name of the Players." << endl;

	for (int i = 0; i < numOfPlayers; i++)
	{

	}
    return 0;
}

