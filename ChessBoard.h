#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#define BOARD_SIZE 100
#include "Player.h"
class chess_Board
{
private:
	int size;
	string* board = nullptr;
	Player p1;
	Player p2;
	
public:
	chess_Board(int);
	void displayChessBoard() const;
	void setScoreBoardp1(int );
	void setScoreBoardp2(int );
	~chess_Board();

};






#endif // !CHESSBOARD_H

