#pragma once
#include "SFML/Graphics.hpp"
#include "Entity.h"
#include <vector>

class Scene : public sf::Drawable
{
	std::vector<Entity*> mEntities;
public:
	void Update();

	void Draw();
};

