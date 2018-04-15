#ifndef IEntity_H
#define IEntity_H
#pragma once
#include"IEntity.h"
#include"IView.h"
#include"Enums.h"


using namespace std;
class Entity :	public IEntity
{
public:
	Entity();
	void destroy();
	void update();
	void render();
	Body *getBody() const ;
	void setBody(Body *value);
	IView *getView() const;
	void setView(IView *value);
	
	Signal getSignal();
	void setSignal(Signal value);
	vector<IEntity *> getTargets();
	void setTargets(vector<IEntity *> value);

	virtual ~Entity();
private:
	Body *body;
	IView *view;
	Signal signal;
	vector <IEntity *>targets;
	vector <IEntity *>group;

};

#endif