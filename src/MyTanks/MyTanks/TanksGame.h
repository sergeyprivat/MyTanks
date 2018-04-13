
#if !defined(_TANKSGAME_H)
#define _TANKSGAME_H
#pragma once

#include "Game.h"
class TanksGame :
	public Game
{
public:
	TanksGame();
	void startGame();
	void onPlayerDestroyed();
	void gameOver();
	void restart();
	void stopGame();
	void udate();


	~TanksGame();

private:
	vector<Entity *> players;
	vector<Entity *> enemies;

};

#endif  //_TANKSGAME_