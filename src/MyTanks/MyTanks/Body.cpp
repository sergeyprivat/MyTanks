#include"stdafx.h"
#include "body.h"


Body::Body(IEntity *ent) 
{
	this->entity = ent;
	x = 0;
	y = 0;
	direct = Up;

}


bool Body::testCollision(IEntity &otherEntity)
{

	return false;
}

int Body::getX()
{
	return this->x;
}

void Body::setX(int x_)
{
	x = x_;
}

int Body::getY()
{
	return y;
}

void Body::setY(int y_)
{
	y = y_;
}



Direction Body::getDirection()
{
	return this->direct;
}

void Body::setDirection(Direction direct)
{
	this->direct = direct;
}




Body::~Body()
{
}
