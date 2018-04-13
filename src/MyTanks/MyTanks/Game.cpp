#include "stdafx.h"
#include "Game.h"


Game::Game()
{
}


void Game::setIsPaused(bool value) {
	isPaused = value;
}

bool Game::getIsPaused() {
	return isPaused;
}

void Game::update() {
}

void Game::render() {
}

void Game::startGame() {
}

void Game::stopGame() {
}

void Game::addEntity(IEntity &entity) {
	entities.push_back(&entity);
}

void Game::onEntityDestroyed(Entity *entity) {
	// remove destroyed entity
}

vector<IEntity*> Game::getEntities()
{
	return this->entities;
}


Game::~Game()
{
}
