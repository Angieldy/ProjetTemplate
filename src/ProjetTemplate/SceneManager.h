#pragma once
#include <vector>

class Scene;

class SceneManager
{
	std::vector<Scene*> scene;
	Scene* currentScene;
public :
	void SetScene();
	Scene* GetCurrentScene();
};

