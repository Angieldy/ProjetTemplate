#pragma once
#include "Render.h"

class RectangleShape : public Render
{
	sf::RectangleShape rectangle;
public:
	RectangleShape();

	sf::RectangleShape GetRectangle();

};
