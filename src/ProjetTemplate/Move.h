#pragma once
#include "Behavior.h"
#include <SFML/Graphics.hpp>

class Move : public Behavior
{
	sf::Vector2f mVectorBall;

public :
	void MoveBall(sf::Vector2f vectorBall);
};

