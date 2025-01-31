#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"

class Scene : public sf::Drawable
{
	std::vector<Component*> mComponents;
public : 
	Scene();

	void AddEntity(Component* newEntity);

	void Draw();

	void Update();
};

