#include "stdafx.h"
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;


Player::Player()
{
}

Player::Player(string name, char type)
{
	nameOfPlayer = name;
	playerType = type;
}


string Player::getName()
{
	return this->nameOfPlayer;
}

char Player::getType()
{
	return this->playerType;
}

void Player::print()
{
}

Player::~Player()
{
	cout << "Bye, " << nameOfPlayer << endl;
}
