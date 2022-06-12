#include "GameManager.h"

GameManager::GameManager(Board* board, Player* player1, Player* player2)
{
	papan = board;
	player[0] = player1;
	player[1] = player2;
}

void GameManager::play()
{
	for (int i = 0; i < papan->getSize(); i++)
	{
		int koor;
		Giliran(i);
		cout << giliran->getName() << " turn" << endl;
		cout << "Input : "; cin >> koor;
		input(koor);
		papan->printBoard();
		if (papan->checkWin())
		{
			gameOver(1);
			break;
		}
		if (i == papan->getSize())
		{
			gameOver(0);
		}
	}
}

void GameManager::gameOver(int status)
{
	if (status == 0)
	{
		cout << "DRAW!!";
		giliran = NULL;
	}
	else
	{
		notifyWinner();
	}
}

void GameManager::input(int koor)
{
	papan->putSymbol(koor, giliran->getSymbol());
}

Player GameManager::Giliran(int a)
{
	if ((a + 1) % 2 == 0)
	{
		giliran = player[1];
	}
	else
	{
		giliran = player[0];
	}

	return *giliran;
}

void GameManager::notifyWinner()
{
	player[0]->Observer(giliran->getName());
	player[1]->Observer(giliran->getName());
}