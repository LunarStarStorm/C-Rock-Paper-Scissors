#pragma once
#include <string>
using namespace std;

class Player
{
public:
	Player();
	Player(string name, char type);

	string getName();
	char getType();
	virtual void print();
	virtual ~Player();
//	~Player();

protected:
	string nameOfPlayer;
	char playerType;
};

