// MyTanks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"TanksGame.h"
#include"Tank.h"
#include <iostream>
#include<Windows.h>


int main()
{
	TanksGame game;

	game.startGame();
	while (1)
	{
		game.update();
		game.render();
		Sleep(50);

	}




	getchar();
	return 0;
}

