#ifndef GOLD_H
#define GOLD_H
#pragma once
#include "Entity.h"
#include"IView.h"

class Gold :
	public Entity
{
public:
	Gold();
<<<<<<< HEAD
	IView *getView() const;
	void setView(IView *value);
	void update();
	void onDied(Entity &entity);
=======
	IView *getView() const;
	void setView(IView *value);
	void update();
	void onDied(Entity &entity);
>>>>>>> branch 'master' of https://github.com/sergeyprivat/MyTanks.git
	void render();

	virtual ~Gold();

private:
	IView *view;
};

#endif // !GOLD_H
