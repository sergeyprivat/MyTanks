#ifndef TANK_H
#define TANK_H

#pragma once
#include "Entity.h"
#include "IMovable.h"

class Tank : public Entity,
	public IMovable
{
public:
	Tank();
	void update();
	void onDied(Entity entity);
	void move();
	
	
	~Tank();
};

#endif // !TANK_H
