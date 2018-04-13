#include "stdafx.h"
#include "Tank.h"


Tank::Tank()
{
	Body *body = new Body(this);
	body->setX(5);
	body->setY(5);
	body->setDirection(Up);
	setBody(body);
	

}

void Tank::update()
{
}

void Tank::onDied(Entity entity)
{
}

void Tank::move()
{
}


Tank::~Tank()
{
}
