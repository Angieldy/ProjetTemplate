#pragma once
#include "Component.h"
#include <SFML/Graphics.hpp>

class Transform2D : public Component, public sf::Transformable
{
public:
	void SetPosition();
	float GetPosition();
	void SetScale();
};