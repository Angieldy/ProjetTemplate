#pragma once
#include "Component.h"
#include <SFML/Graphics.hpp>
#include <ios>

class Transform2D : public Component, public sf::Transformable
{

public:
    Transform2D(int entityID);

    Transform2D();

    void Awake() override;

    void Start() override;

    sf::Vector2f GetPosition();

    void SetPosition(sf::Vector2f newPos);

    void SetScale(sf::Vector2f newScale);

    sf::Vector2f GetScale();

    void SetRotation(float newRotation);

    float GetRotation();


};