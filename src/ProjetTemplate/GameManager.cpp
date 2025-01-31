#include "pch.h"
#include "GameManager.h"
#include <iostream>

GameManager* GameManager::mInstance = nullptr;

GameManager::GameManager() : mSceneManager(SceneManager(nullptr))
{
    if (mInstance == nullptr)
        mInstance = this;
}

GameManager* GameManager::GetInstance()
{
    if (mInstance == nullptr)
    {
        mInstance = new GameManager();
    }
    return mInstance;
}

//boucle SFML
void GameManager::Run()
{
}