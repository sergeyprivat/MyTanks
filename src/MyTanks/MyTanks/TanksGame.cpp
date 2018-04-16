#include "stdafx.h"
#include "TanksGame.h"


TanksGame::TanksGame()
{
}


void TanksGame::startGame() {



	Wall *wall = new Wall;
	neutral.push_back(wall);
	wall->setGroup(neutral);
	addEntity(*wall);


	Gold *gold = new Gold;
	players.push_back(gold);
	gold->setGroup(players);
	addEntity(*gold);

	Tank *playerTank = new Tank;
	vector<IEntity *> targets = enemies;
	//targets for Player's tank vector enemies and neutral
	targets.insert(targets.end(), neutral.begin(), neutral.end());

	playerTank->setTargets(targets);
	playerTank->setGroup(players);
	players.push_back(playerTank);
	addEntity(*playerTank);



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
