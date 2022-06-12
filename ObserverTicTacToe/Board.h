#include <iostream>
#include <math.h>
using namespace std;

class Board
{
private:
	char* board;
	int size;
public:
	Board();
	Board(int size);
	~Board();
	int getSize();
	void clearBoard();
	void printBoard();
	void putSymbol(int koor, char simbol);
	bool checkWin();
	bool isOccupied(int koor);
	char board2D(int x, int y);
};