#include "stdafx.h"
#include "Tank.h"
#include"View.h"
#include"Physics.h"



Tank::Tank()
{
	Body *body = new Body(this);
	body->setX(10);
	body->setY(10);
	body->setDirection(Up);
	setBody(body);

	View * view = new View(this);
	view->setSymbol('#');

	Entity::setView(view);
	physics = new Physics(this);
}

void Tank::update()
{
	Entity::getView()->setSymbol(' ');//clearold position
	render();
	move();
	Entity::getView()->setSymbol('#');
	
		
}

void Tank::onDied(Entity &entity)
{
}

void Tank::move()
{
    KeyPressed key_ = Control::getKey();

	switch (key_)
	{
	case KeyPressed::left :
	{
		physics->move(Direction::Left);
		break;


	}

	case KeyPressed::right:
	{
		physics->move(Direction::Right);
		break;

	}

	case KeyPressed::up:
	{
		physics->move(Direction::Up);
		break;

	}

	case KeyPressed::down:
	{
		physics->move(Direction::Down);
		break;

	}


	}
}

void Tank::render()
{

	Entity::getView()->render();
}



void Tank::setPhysics(IMovable * phys)
{
	physics = phys;
}

IMovable * Tank::getPhysics() const
{
	return physics;
}

/*


void Tank::setControl(Control  * contr)
{
}

Control *Tank::getControl()
{
	return control;
}




*/


Tank::~Tank()
{
}
