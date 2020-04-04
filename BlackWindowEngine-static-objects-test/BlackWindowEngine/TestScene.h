#pragma once

#include "Canon.h"
#include "SceneManager.h"
#include <optional>
#include "Player.h"
#include "Wall.h"
#include "PushTrap.h"
#include "MovingTrap.h"
using namespace std;

class TestScene : public SceneManager
{
private:
public:
	
	int Size = 30;
	TestScene() : SceneManager()
	{
		mapPointer = new Map(30, 30);
	};
	void Create()
	{
		worldOutliner.AddObject(new Canon(FPosition({ 1,1 }), "canon1", "��", "��", Area({ 2,8 }), "��", "Canon"));
		worldOutliner.AddObject(new Canon(FPosition({ 5,1 }), "canon2", "��", "��", Area({1,1}), "��", "Canon"));
		worldOutliner.AddObject(new Canon(FPosition({ 1,10 }), "canon3", "��", "��", Area({10,1}), "��", "Canon"));
		worldOutliner.AddObject(new Player(FPosition({ 2,28 }), "Player", "��", "Player"));
		worldOutliner.AddObject(new PushTrap(FPosition({ 15, 15 }), "PushTrap_1", "@@", "PushTrap"));
		worldOutliner.AddObject(new MovingTrap(FPosition({ 20, 20 }), "MovingTrap_1", "HH", "��", "MovingTrap"));
		worldOutliner.AddObject(new MovingTrap(FPosition({ 10, 20 }), "MovingTrap_2", "HH", "��", "MovingTrap"));
		worldOutliner.AddObject(new MovingTrap(FPosition({ 28, 28 }), "MovingTrap_3", "VV", "��", "MovingTrap"));
		worldOutliner.AddObject(new MovingTrap(FPosition({ 28, 14 }), "MovingTrap_4", "VV", "��", "MovingTrap"));
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
	~TestScene() 
	{

	}
	void Map_Make() 
	{
		worldOutliner.AddObject(new Wall(FPosition({ 0,0 }), "Wall_Top", "��", Area({ Size, 1 }), "Wall"));
		worldOutliner.AddObject(new Wall(FPosition({ 0,0 }), "Wall_Left", "��", Area({ 1, Size }), "Wall"));
		worldOutliner.AddObject(new Wall(FPosition({ (float) Size-1, 0 }), "Wall_Right", "��", Area({ 1, Size }), "Wall"));
		worldOutliner.AddObject(new Wall(FPosition({ 0, (float) Size-1 }), "Wall_Bottom", "��", Area({ Size, 1 }), "Wall"));
	}
	string getW()
	{
		worldOutliner.FindObject("Player")->GetShape();
	}
};