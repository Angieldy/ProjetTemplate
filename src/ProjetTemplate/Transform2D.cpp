#include "pch.h"
#include "Transform2D.h"

Transform2D::Transform2D(int entityID) :Component(entityID)
{
}

Transform2D::Transform2D() : Component()
{
}

void Transform2D::SetPosition(sf::Vector2f newPos)
{
    setPosition(newPos);
}

void Transform2D::SetScale(sf::Vector2f newScale)
{
    setScale(newScale);
}

sf::Vector2f Transform2D::GetScale()
{
    return getScale();
}

sf::Vector2f Transform2D::GetPosition()
{
    return getPosition();
}

void Transform2D::SetRotation(float newRotation)
{
    setRotation(newRotation);
}

float Transform2D::GetRotation()
{
    return getRotation();
}