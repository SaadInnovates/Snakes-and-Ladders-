#include<iostream>
using namespace std;
#include "ChessBoard.h"
#include "Player.h"
#include "Color.h"


Player::Player(string symbol2,int score2,int p):symbol(symbol2),score(score2),playerNumber(p) {}



void setScore( Player& p, int s2 )
{
	if (s2 == 5 || s2 == 13 || s2 == 29 || s2 == 44 || s2 == 51)
	{
		setColor(93);
		cout << "Wow!! You climbed the ladder.\n";

		p.score = s2 + 6;
	}
	else if (s2 == 30 || s2 == 41 || s2 == 49 || s2 == 58 || s2 == 67 || s2 == 90)
	{
		setColor(93);
		cout << "OOPS!! You are bitten by a snake.\n";
		p.score = s2 - 6;
	}
	else if(s2 >100)
	{
		p.score = 100-(s2-100);
	}
	else if (s2 == 100)
	{
		setColor(93);
		cout << "WOW!! Player " << p.getPlayerNo()<< " won the game.\n";
	}
	else
	{
		p.score = s2;
	}
	
}
