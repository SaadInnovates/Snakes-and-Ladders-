#include<iostream>
#include<cstdlib>
#include<windows.h>
#include<iomanip>
using namespace std;
#include "ChessBoard.h"
#include "Player.h"
#include "Color.h"
#define SIZE 100
int main()
{
	cout << setw(25);
	setColor(93);
	cout << "<<<<<<<<<<<<<<<<<<<<"; setColor(91);  cout << "SNAKES "; setColor(97); cout << " and "; setColor(92); cout << "LADDERS"; setColor(93); cout << ">>>>>>>>>>>>>>>>>>>>\n\n\n";
	cout << "This is a 2-Player Game designed by Muhammad Saad Zubair.\n";
	cout << "Note: Sometimes, the players move backwards because of some hidden snakes.\n";
	setColor(97);
	chess_Board board(SIZE);
	board.displayChessBoard();

	setColor(92);
	int option;
	cout << "\nDo you want to multiplayer or single-Player, Press :-\n 1 : Multiplayer\t\t2: Single Player\n";
	cout << "Enter : ";
	setColor(93);
	cin >> option;
	while (option < 1 || option >2)
	{
		setColor(91);
		cout << "ERROR!!\a"; setColor(92);	cout << " Press :-\n 1 : Multiplayer\t\t2: Single Player\n"; cout << "Enter : ";
		setColor(93);
		cin >> option;
	}
	cin.ignore();
	int score1 = 0, score2 = 0;
	srand(time(nullptr));

	switch (option)
	{
	case 1:
		while (score1 < 100 && score2 < 100)
		{
			int dice;
			setColor(92);
			cout << endl;
			cout << "Player 1 , Press ENTER to throw the DICE : ";
			cin.get();
			dice = rand() % 6 + 1;
			score1 += dice;
			if (score1 == score2)
			{
				score2 = 0;
				setColor(93);
				cout << "Player 1 hit Player 2.\n";
			}
			board.setScoreBoardp1(score1);
			if (score1 >= 100)
			{
				cout << "\nPlayer 1 won the game.\n";
				return 0;

			}
			
			board.displayChessBoard();
			
			
			cout << endl;
			setColor(92);
			cout << "Player 2 , Press ENTER to throw the DICE : ";
			cin.get();
			system("cls");
			dice = rand() % 6 + 1;
			score2 += dice;
			if (score1 == score2)
			{
				score1 = 0;
				setColor(93);
				cout << "Player 2 hit Player 1.\n";
			}
			board.setScoreBoardp2(score2);
			if (score2 >= 100)
			{
				cout << "\nPlayer 2 won the game.\n";
				return 0;
			}
			board.displayChessBoard();
			
			
		}
		
		
		break;
	case 2:
		while (score1 < 100 && score2 < 100)
		{
			int dice;
			setColor(92);
			cout << endl;
			cout << "Player , Press ENTER to throw the DICE : ";
			cin.get();
			dice = rand() % 6 + 1;
			score1 += dice;
			
			

			if (score1 == score2)
			{
				score2 = 0;
			}
			if (score1 >= 100)
			{
				cout << "\nPlayer won the game.\n";
				return 0;
			}
			
			board.setScoreBoardp1(score1);
			system("cls");
			board.displayChessBoard();
			dice = rand() % 6 + 1;
			score2 += dice;
			
			if (score1 == score2)
			{
				score1 = 0;
			}
			if (score2 >= 100)
			{
				cout << "\nComputer won the game.\n";
				return 0;
			}
			board.setScoreBoardp2(score2);
			board.displayChessBoard();
		}
		break;
		
	}
	return 0;
}