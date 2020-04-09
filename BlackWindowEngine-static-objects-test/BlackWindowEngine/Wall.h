#pragma once

#include "Object.h"

class Wall : public Object {
private:

public:
	
	//WorldOutliner worldOutliner;
	Wall()
	{

	}
	Wall(FPosition p, string name, Area area) : Object(p, name, "��",area, "Wall")
	{
	}
	Wall(FPosition p, string name, string shape, string Type) : Object(p, name, shape, Type)
	{
		
	}
	Wall(FPosition p, string name, string shape, Area area, string Type) : Object(p, name, shape, area, Type)
	{

	}

	void Work() // ���� �ȿ��� ���ư��� Work
	{
		Make();
	}

	void Make() {
		//SceneManager.worldOutliner.AddObject(new Wall(FPosition({ 5,5 }), "Wall_10,10", "��"));
	}
	void OnCollision(Object* other)
	{
		;
	}
	
	
	
	
	void Pause()
	{

	}
	~Wall()
	{

	}
};