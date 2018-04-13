#ifndef GAME_H
#define GAME_H
#pragma once
#include"Entity.h"

class Game
{
public:
	Game();
	
	void setIsPaused(bool value);
	bool getIsPaused();
	void update();
	void render();
	void startGame();
	void stopGame();
	void addEntity(IEntity &entity);
	void onEntityDestroyed(Entity *entity);
	vector<IEntity *> getEntities();

	~Game();

private:
	vector<IEntity *> entities;
	bool isPaused;
};


#endif // !GAME_H;
