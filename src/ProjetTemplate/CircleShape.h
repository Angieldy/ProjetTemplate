#pragma once
#include "Render.h"

class CircleShape : public Render
{
	sf::CircleShape ball;
public : 
	CircleShape(sf::CircleShape ball);

	sf::CircleShape GetCircle();

};

