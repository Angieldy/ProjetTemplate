#pragma once
#include "SceneManager.h"

class GameManager
{
private:
	static GameManager* mInstance;
	SceneManager mSceneManager;
public:
	GameManager();

	static GameManager* GetInstance();

	void Run();
};
