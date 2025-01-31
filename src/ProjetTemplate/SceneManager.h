#pragma once
#include <vector>

class Scene;

class SceneManager
{
	std::vector<Scene*> mScenes;
	Scene* mCurrentScene;
public :
	SceneManager(Scene* scene);
	
	void AddScene(Scene* newScene);

	void SetCurrentScene(Scene* newCurrentScene);

	Scene* GetCurrentScene();
};

