#pragma once
#include <vector>
#include "Entity.h"

class Component
{
	int mEntityID;
public:
	Component(int entityID);

	virtual void Awake() = 0;

	virtual void Start() = 0;

	template <typename T>
	T* Get();

	template <typename T>
	std::vector<T*> GetAll();

	template <typename T>
	void Add(T* newT);
};

template<typename T>
T* Component::Get()
{
	for (int i = 0; i < mEntity->GetComponents(); i++)
	{
		if (T * entity == dynamic_cast<T>(mEntity))
		{
			return entity;
		}
	}
	return nullptr;
}

template<typename T>
std::vector<T*> Component::GetAll()
{
	std::vector<T*> Tplaces;
	for (int i = 0; i < mEntities.size(); i++)
	{
		if (T* entity = dynamic_cast<T>(mEntities))
		{
			Tplaces.push_back(entity);
		}
	}
	return Tplaces;
}

template<typename T>
void Component::Add(T* newT)
{
	mEntity->GetComponents().push_back(newT);
}
