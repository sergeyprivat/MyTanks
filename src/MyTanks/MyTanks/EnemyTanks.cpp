#include "stdafx.h"
#include "EnemyTank.h"
#include "View.h"


EnemyTank::EnemyTank()
{
	Body *body = new Body(this);
	body->setX(18);
	body->setY(18);
	body->setDirection(Up);
	setBody(body);

	view = new View(this);
	view->setSymbol('W');

	physics = new Physics(this);

}


void EnemyTank::update()
{
	view->setSymbol(' ');//clearold position
	render();
	move();
	view->setSymbol('W');


}

void EnemyTank::onDied(Entity &entity)
{
}

void EnemyTank::move()
{
	Direction direct = static_cast <Direction>(rand() % (Down +1));

	int oldX_ = this->getBody()->getX();
	int	oldY_ = this->getBody()->getY();
		
	physics->move(direct);
	
	// checking the ability to move
	bool movePosible = true;
	vector<IEntity *> otherEntities;
	otherEntities = getTargets();
	vector<IEntity *> group = getGroup();
	otherEntities.insert(otherEntities.end(), group.begin(), group.end());

	
	
	for each (IEntity *ent in otherEntities)
	{
		//skip check colision with yourself
		if (ent != this)
		{
			if (getBody()->testCollision(*ent))
			{
				movePosible = false;
			}
<<<<<<< HEAD
			else
			{
				movePosible = true;
			}

=======
			
>>>>>>> branch 'master' of https://github.com/sergeyprivat/MyTanks.git
		}



	}
	
	
	int newX_ =  this->getBody()->getX(); 
	int	newY_ = this->getBody()->getY();
	

	if (newX_ >= 30 || newX_ == 0 || newY_ >= 30 || newY_ == 0)
	{
		movePosible = false;
	}

	if (movePosible == false)
	{
		getBody()->setX(oldX_);
		getBody()->setY(oldY_);
	}



}

void EnemyTank::render()
{

	view->render();
}

void EnemyTank::setView(IView *view_)
{
	view = view_;
}

IView *EnemyTank::getView() const
{
	return view;
}



void EnemyTank::setPhysics(IMovable * phys)
{
	physics = phys;
}

IMovable * EnemyTank::getPhysics() const
{
	return physics;
}



EnemyTank::~EnemyTank()
{
}
