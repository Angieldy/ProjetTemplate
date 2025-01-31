#include "pch.h"
#include "SceneManager.h"

SceneManager::SceneManager(Scene* scene) : mCurrentScene(scene)
{
	mScenes.push_back(scene);
}

void SceneManager::AddScene(Scene* newScene)
{
	mScenes.push_back(newScene);
}

void SceneManager::SetCurrentScene(Scene* newCurrentScene)
{
	mCurrentScene = newCurrentScene;
}

Scene* SceneManager::GetCurrentScene()
{
	return mCurrentScene;
}
