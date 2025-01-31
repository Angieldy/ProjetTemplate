#include "pch.h"
#include "Entity.h"

Entity::Entity() : mComponents(std::vector<Component*>())
{
}

std::vector<Component*> Entity::GetComponents()
{
	return mComponents;
}
