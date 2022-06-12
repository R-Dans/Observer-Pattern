#include "GameManager.h"

int main()
{
	Board board(3);
	Player a("\nMumu", 'X');
	Player b("\nDede", 'O');
	GameManager gamemanager(&board, &a, &b);
	int choice = 0;
	while (choice != 99)
	{
		cout << "1. Play" << endl;
		cout << "2. P1 Score" << endl;
		cout << "3. P2 Score" << endl;
		cout << "99. Exit" << endl;
		cout << "Input [] : "; cin >> choice;
		switch (choice)
		{
		case 1:
			gamemanager.play();
			break;
		case 2:
			cout << a.getName() << " score " << a.getWin() << " - " << a.getLose() << endl;
			break;
		case 3:
			cout << b.getName() << " score " << b.getWin() << " - " << b.getLose() << endl;
			break;
		default:
			cout << "Your Input is Wrong";
		}
	}

}