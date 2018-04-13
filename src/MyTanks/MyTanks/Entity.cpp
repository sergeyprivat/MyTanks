#include "stdafx.h"
#include"Entity.h"
#include"Body.h"
#include <windows.h>
#include <iostream>


Entity::Entity()
{
	body = new Body(this);
}

void Entity::destroy()
{
}

void Entity::update()
{
}

void Entity::render()
{
	
		HANDLE hOut;
		COORD Position;

		hOut = GetStdHandle(STD_OUTPUT_HANDLE);

		Position.X = this->body->getX();
		Position.Y = this->body->getY();
		SetConsoleCursorPosition(hOut, Position);
		
		//std::cout << body->getX() << endl;
		//std::cout << body->getX() << endl;

	
		std::cout << "#";

}

 Body *Entity::getBody() const 
{
	
	return body;
}


void Entity::setBody(Body *value)
{
	body = value;
}

Signal Entity::getSignal()
{
	return Signal();
}

void Entity::setSignal(Signal value)
{
}

vector<IEntity> Entity::getTargets()
{
	return vector<IEntity>();
}

void Entity::setTargets(vector<IEntity> value)
{
}


Entity::~Entity()
{
}
