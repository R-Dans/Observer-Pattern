#include "Player.h"

Player::Player(string a, char b)
{
	setName(a);
	setSymbol(b);
}

void Player::setName(string a)
{
	name = a;
}

void Player::setSymbol(char a)
{
	symbol = a;
}

string Player::getName()
{
	return name;
}

char Player::getSymbol()
{
	return symbol;
}

int Player::getWin()
{
	return winrate;
}

int Player::getLose()
{
	return defeatrate;
}

void Player::Observer(string name)
{
	if (name == this->name)
	{
		winrate += 1;
		cout << this->name << " WIN!\n" << endl;
	}
	else
	{
		defeatrate += 1;
		cout << this->name << " LOSE!\n" << endl;
	}
}