#include "stdafx.h"
#include"Entity.h"
#include"Body.h"
#include"View.h"



Entity::Entity()
{
	body = new Body(this);
	view = new View(this);
}

void Entity::destroy()
{
}

void Entity::update()
{
}

void Entity::render()
{
	
}

 Body *Entity::getBody() const 
{
	
	return body;
}


void Entity::setBody(Body *value_)
{
	body = value_;
}

void Entity::setView(IView *view_)
{
	view = view_;
}

IView *Entity::getView() const
{
	return view;
}


Signal Entity::getSignal()
{
	return Signal();
}

void Entity::setSignal(Signal value)
{
}

vector<IEntity *> Entity::getTargets()
{
	return vector<IEntity *>();
}

void Entity::setTargets(vector<IEntity *> value)
{
}

Entity::~Entity()
{
}

