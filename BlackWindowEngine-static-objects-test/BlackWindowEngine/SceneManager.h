	#pragma once


#include "Object.h"
#include "Map.h"
#include "SceneManager.h"

#include "Tools.h"
#include "WorldOutliner.h"


class SceneManager
{
protected:
public:
	WorldOutliner worldOutliner;
	Map* mapPointer;

	SceneManager()
	{
		worldOutliner = WorldOutliner();
	};
	
	virtual void Create(){};			//Called when the Application is first created.
	virtual void Render(float dt){};
	virtual void Resize(int x, int y){};
	virtual void Input(float dt){};
	virtual void Pause() {};			//Stop Game
	virtual ~SceneManager() {};				//Called when this Game should release all resources.

	void UploadMap(Object* o)
	{
		mapPointer->SetPartOfMap(PositionTools::FPtoIP(o->GetPosition()), o->GetShape(), o->GetArea());
	}

	void UploadMap(vector<Object*> obs)
	{
		for (auto o : obs)
		{
			try
			{
				mapPointer->SetPartOfMap(PositionTools::FPtoIP(o->GetPosition()), o->GetShape(), o->GetArea());
			}
			catch (exception e)
			{
				Tools::cersorMoveTo(Position({ 0, mapPointer->GetYSIZE() + 2 }));
				cout << "ERROR : out of Map" << endl;
				Tools::backCersor();
			}
		}
	}
	WorldOutliner getWorldOutliner() {
		return worldOutliner;
	}

	void SceneChange(SceneManager scene)
	{
		
	}
};