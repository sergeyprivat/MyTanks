#if !defined(_TANKSGAME_H)
#define _TANKSGAME_H
#pragma once
#include "Game.h"
#include"Tank.h"

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
	void setPlayers(vector<IEntity *>);
	vector<IEntity *> getPlayers();
	void setTargets(vector<IEntity *>);
	vector<IEntity *> getTargets();
	virtual ~TanksGame();

private:
	vector<IEntity *> players;
	vector<IEntity *> enemies;
	bool exit_ = false;

};

#endif  //_TANKSGAME_