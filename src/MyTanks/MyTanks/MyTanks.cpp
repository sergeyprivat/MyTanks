// MyTanks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"Game.h"
#include"Tank.h"
#include <iostream>

int main()
{
	Game game;
	Tank  tank;



	game.addEntity(tank);

	

	cout << tank.getBody().getX() << endl;
	cout << endl;
	cout << tank.getBody().getY() << endl;
	
	for each	(IEntity *ent  in game.getEntities())
	{
		ent->render();
	}
	
	
	
	getchar();
    return 0;
}

