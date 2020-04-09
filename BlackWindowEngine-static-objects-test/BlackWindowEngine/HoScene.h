#pragma once
#pragma once

#include "Canon.h"
#include "SceneManager.h"
#include <optional>
#include "Player.h"
#include "Wall.h"
#include "PushTrap.h"
#include "MovingTrap.h"

using namespace std;

class HoScene : public SceneManager
{
private:
public:
	
	int Size = 40;
	HoScene() : SceneManager()
	{
		mapPointer = new Map(Size, Size);
	};
	void Create()
	{
		Map_Make();
		

	}

	void Render(float dt)
	{
		//		worldOutliner.FindObject("MovingTrap_1")->TryWork();

			//dynamic_cast<Player*>(worldOutliner.FindObject("canon1"))->getW();

		


	}
	void Resize(int x, int y)
	{

	}
	void Input(float dt)
	{

	}
	void Pause()
	{

	}
	~HoScene()
	{

	}
	void Map_Make()
	{
		worldOutliner.AddObject(new Wall(FPosition({ 0,0 }), "Wall_Top", "бс", Area({ Size, 1 }), "Wall"));
		worldOutliner.AddObject(new Wall(FPosition({ 0,0 }), "Wall_Left", "бс", Area({ 1, Size }), "Wall"));
		worldOutliner.AddObject(new Wall(FPosition({ (float)Size - 1, 0 }), "Wall_Right", "бс", Area({ 1, Size }), "Wall"));
		worldOutliner.AddObject(new Wall(FPosition({ 0, (float)Size - 1 }), "Wall_Bottom", "бс", Area({ Size, 1 }), "Wall"));
	}

};