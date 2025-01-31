#pragma once
#include "SpriteRender.h"
#include "Transform2D.h"
#include "Collider.h"
#include "Behavior.h"


class Entity
{
private:
	std::vector<Component*> mComponents;
public:
	Entity();

	std::vector<Component*> GetComponents();
};

