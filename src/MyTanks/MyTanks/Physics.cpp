#include "stdafx.h"
#include "Physics.h"


Physics::Physics(IEntity * ent)
{
	this->entity = ent;
}

void Physics::move(Direction direct)
{
	int curX_, curY_; //current x, y
	switch (direct)
	{
	case Direction::Left:
	{
		curX_ = entity->getBody()->getX();
		curX_--;
		entity->getBody()->setX(curX_);
		break;

	}

	case Direction::Right:
	{
		curX_ = entity->getBody()->getX();
		curX_++;
		entity->getBody()->setX(curX_);
		break;

	}

	case Direction::Up:
	{
		curY_ = entity->getBody()->getY();
		curY_--;
		entity->getBody()->setY(curY_);
		break;

	}

	case Direction::Down:
	{
		curY_ = entity->getBody()->getY();
		curY_++;
		entity->getBody()->setY(curY_);
		break;

	}


	}

}


Physics::~Physics()
{
}
