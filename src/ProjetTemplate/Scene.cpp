#include "pch.h"
#include "Scene.h"

Scene::Scene() : mComponents(std::vector<Component*>())
{
}

void Scene::AddEntity(Component* newEntity)
{
	mComponents.push_back(newEntity);
}

void Scene::Draw()
{
	for (int i = 0; i < mComponents.size(); i++)
	{
		mComponents[i]->Get<Render*>();
	}
}

void Scene::Update()
{
	for (int i = 0; i < mComponents.size(); i++)
	{
		Transform2D* tmp(*mComponents[i]->Get<Transform2D*>());
		if (tmp != nullptr)
		{
			//tmp.Update();
		}
		Collider* tmp(*mComponents[i]->Get<Collider*>());
		if (tmp != nullptr)
		{
			//tmp.Update();
		}
		Behavior* tmp(*mComponents[i]->Get<Behavior*>());
		if (tmp != nullptr)
		{
			//tmp.Update();
		}
	}
}