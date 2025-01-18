#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
	string symbol;
	int score;
	int playerNumber;
public:
	Player(string, int,int);
	friend void setScore(Player&,int);
	int getScore() const {  return score; }
	string getPlayer() const { return symbol; }
	int getPlayerNo() const { return playerNumber; }


};

#endif // !PLAYER_H

