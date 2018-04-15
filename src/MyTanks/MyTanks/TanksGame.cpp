
#include "stdafx.h"
#include "TanksGame.h"


TanksGame::TanksGame()
{
}


void TanksGame::startGame() {

	Tank *tank = new Tank;
	tank->setTargets(enemies);
	players.push_back(tank);
	addEntity(*tank);


	update();
	render();
}

void TanksGame::onPlayerDestroyed() {
}

void TanksGame::gameOver() {
}

void TanksGame::restart() {
}

void TanksGame::stopGame() {
}

void TanksGame::udate() {

	Game::update();
	/*
	if (enemies.size() == 0)
	{
		gameOver();
	}
	
	*/
	
}

void TanksGame::setPlayers(vector<IEntity *>)
{
}

vector<IEntity *> TanksGame::getPlayers()
{
	return vector<IEntity *>();
}

void TanksGame::setTargets(vector<IEntity *>)
{
}

vector<IEntity *> TanksGame::getTargets()
{
	return vector<IEntity *>();
}




TanksGame::~TanksGame()
{
}
