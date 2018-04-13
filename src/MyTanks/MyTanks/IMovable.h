#pragma once

class IMovable
{
public:
	IMovable();
	virtual void move() = 0;
	virtual ~IMovable();
};

