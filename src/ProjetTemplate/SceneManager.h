#pragma once
#include "Scene.h"

class SceneManager
{
	std::vector<Scene*> mScenes;
	Scene* mCurrentScene;
public:
	void SetCurrentScene(Scene* newCurrentScene);

	Scene* GetCurrentScene();
};

