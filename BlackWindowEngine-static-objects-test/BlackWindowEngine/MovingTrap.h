#pragma once
#include "Object.h"
#include "WorldOutliner.h"
#include "SceneManager.h"
class MovingTrap : public Object {
private:
	
public:
	string Direction;
	string ID;
	MovingTrap()
	{

	}
	MovingTrap(FPosition Position, string Name, string Shape, string Direction, string Type) : Object(Position, Name, Shape, Direction, Type)
	{
		ID = Name;
		this->Direction = Direction;
	}



	void Work() 
	{
		Move();
	}

	/*void OnCollision(Object* other) 
	{
		Object* o = WorldOutliner::FindObject(ID);
		if (o->getDirection() == "��") {
			o->setDirection("��");
		}
		if (o->getDirection() == "��") {
			o->setDirection("��");
		}

		if (o->getDirection() == "��") {
			Translate({ +5, 0 });
			o->setDirection("��");
			
		}
		if (o->getDirection() == "��") {
			o->setDirection("��");
		}
	}*/

	void OnCollision(Object* other)
	{
		Object* o = WorldOutliner::FindObject(ID);
		if (o->getDirection() == "��") {
			o->setDirection("��");
		}
		else if (o->getDirection() == "��") {
			o->setDirection("��");
		}

		if (o->getDirection() == "��") {
			o->setDirection("��");
		}
		else if (o->getDirection()== "��") {
			o->setDirection("��");
		}
	}
	void Move()
	{
		Object* o = WorldOutliner::FindObject(ID);
		if (o->getDirection() == "��") {
			Translate(Up);
		}
		else if (o->getDirection() == "��") {
			Translate(Down);
		}

		if (o->getDirection() == "��") {
			Translate(Left);
		}
		else if (o->getDirection() == "��") {
			Translate(Right);
		}
	}
};