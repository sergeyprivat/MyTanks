#include "stdafx.h"
#include "TanksGame.h"


TanksGame::TanksGame()
{
}


void TanksGame::startGame() {

	//set gold
	Gold *gold = new Gold;
	players.push_back(gold);
	gold->setGroup(players);
	addEntity(*gold);

	//set walls
	for (int i = 0; i <= NUMBER_OF_WALL; i++)
	{

		bool placeFree = false;
		while (placeFree) {
			COORD newCoord = genPosition(FIELD_WIDTH, FIELD_LENGTH);
			int length = rand() % (MAX_LENGTH_OF_WALL + 1);

			
			int direct = rand() % 2;
			if (direct == 1) //horizont position
			{
				for (int x = newCoord.X; x <= newCoord.X + length; x++)
				{
					for each (IEntity *ent in getEntities())
					{
						// coord of wall out of field or match with other entity
						if (x >= FIELD_WIDTH || (ent->getBody()->getX() == x && ent->getBody()->getY() == newCoord.Y))
						{
							placeFree = false;
						}
						else placeFree = true;

					}
				}
			}
			else if (direct == 0) //vertical position
			{

				for (int y = newCoord.Y; y <= newCoord.Y + length; y++)
				{
					for each (IEntity *ent in getEntities())
					{
						// coord of wall out of field or match with other entity
						if (y >= FIELD_WIDTH || (ent->getBody()->getY() == y && ent->getBody()->getX() == newCoord.X))
						{
							placeFree = false;
						}
						else placeFree = true;

					}
				}


			}

		
			Wall *wall = new Wall;
			wall->getBody()->setX(newCoord.X);
			wall->getBody()->setY(newCoord.Y);

			neutral.push_back(wall);
			wall->setGroup(neutral);
			addEntity(*wall);
		
		}


	}


	Tank *playerTank = new Tank;
	vector<IEntity *> targets = enemies;

	//targets for Player's tank vector enemies and neutral
	targets.insert(targets.end(), neutral.begin(), neutral.end());

	playerTank->setTargets(targets);
	playerTank->setGroup(players);
	players.push_back(playerTank);
	addEntity(*playerTank);

	EnemyTank *enemyT = new EnemyTank;

	targets = players;
	//targets for Enemy tank's vector players and neutral
	targets.insert(targets.end(), neutral.begin(), neutral.end());
	enemyT->setTargets(targets);
	enemies.push_back(enemyT);
	addEntity(*enemyT);

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

COORD TanksGame::genPosition(int maxX, int maxY)
{
	COORD pos;
	pos.X = rand() % (maxX + 1);
	pos.Y = rand() % (maxY + 1);
	return pos;
}


