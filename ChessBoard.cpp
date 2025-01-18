#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#include "ChessBoard.h"
#include "Player.h"
#include "Color.h"
chess_Board::chess_Board(int s) :size(s),p1("O",0,1),p2("X",0,2)
{
	board = new string[size];
	int vals = size;
	for (int i = 0; i < 10; i++)
	{
		board[i] = to_string(vals);
		vals--;
	}
	vals = 81;
	for (int i = 10; i < 20; i++)
	{
		board[i] = to_string(vals);
		vals++;
	}
	vals = 80;
	for (int i = 20; i < 30; i++)
	{
		board[i] = to_string(vals);
		vals--;
	}
	vals = 61;
	for (int i = 30; i < 40; i++)
	{
		board[i] = to_string(vals);
		vals++;
	}
	vals = 60;
	for (int i = 40; i < 50; i++)
	{
		board[i] = to_string(vals);
		vals--;
	}
	vals = 41;
	for (int i = 50; i < 60; i++)
	{
		board[i] = to_string(vals);
		vals++;
	}
	vals = 40;
	for (int i = 60; i < 70; i++)
	{
		board[i] = to_string(vals);
		vals--;
	}
	vals = 21;
	for (int i = 70; i < 80; i++)
	{
		board[i] = to_string(vals);
		vals++;
	}
	vals = 20;
	for (int i = 80; i < 90; i++)
	{
		board[i] = to_string(vals);
		vals--;
	}
	vals = 1;
	for (int i = 90; i < 100; i++)
	{
		board[i] = to_string(vals);
		vals++;
	}

}

void chess_Board::displayChessBoard() const
{

	for (int counter = 0; counter < 100; counter++)
	{
		if (counter % 10 == 0)
		{
			cout << "\n";
			for (int counter = 0; counter < 85; counter++)
			{
				setColor(93);
				cout << "-";
			}
			setColor(97);
			cout << "\n   |";
			

		}
		setColor(92);
		
	    if(stoi(board[counter]) ==p1.getScore())
		{
			setColor(97);
			cout << setw(4) << p1.getPlayer();
		}
	    else if (stoi(board[counter]) == p2.getScore())
		{
			setColor(97);
			cout << setw(4) << p2.getPlayer();
		}
		else if (board[counter] == "5" || board[counter] == "13" || board[counter] == "29" || board[counter] == "44" || board[counter] == "51")
		{
			setColor(94);
			cout << setw(5) << board[counter];
		}
		else if (board[counter] == "30" || board[counter] == "49" || board[counter] == "58" || board[counter] == "67" || board[counter] == "90" || board[counter] == "41")
		{
			setColor(91);
			cout << setw(5) << board[counter];
		}
		else
		{
			setColor(92);
			cout << setw(5) << board[counter];

		}
		setColor(97);
		cout << " | ";
		

	}
	cout << '\n';
	for (int counter = 0; counter < 85; counter++)
	{
		setColor(93);
		cout << "-";
	}
	setColor(97);
}
chess_Board::~chess_Board()
{
	if (board != nullptr)
	{
		delete[] board;
		board = nullptr;
	}
}

void chess_Board::setScoreBoardp1(int s1)
{
	setScore(p1, s1);
	
}

void chess_Board::setScoreBoardp2(int s2)
{
	setScore(p2, s2);
}