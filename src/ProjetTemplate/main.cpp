#include "pch.h"
#include "main.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <thread>

int main()
{
#ifdef _DEBUG
	_CrtDumpMemoryLeaks();
#endif

	sf::RenderWindow window(sf::VideoMode(1600, 1000), "Casse-Briques");

    window.setFramerateLimit(60);

    const int windowWidth = 1600;
    const int windowHeight = 1000;

    sf::CircleShape ball(15.f);
    int ballx = 790;
    int bally = 850;
    ball.setPosition(ballx, bally);
    ball.setFillColor(sf::Color::White);

    sf::Vector2f vectorBall(8.0f, 5.0f);

    sf::RectangleShape plateforme(sf::Vector2f(200.f, 30.f));
    float x1 = 750.f;
    float y1 = 900.f;
    plateforme.setPosition(x1, y1);
    plateforme.setFillColor(sf::Color::White);

	std::vector<sf::RectangleShape> walls;

    sf::RectangleShape wall1(sf::Vector2f(50, 1000));
    wall1.setFillColor(sf::Color(255, 255, 255, 255)); // rend transparent
    wall1.setPosition(1550, 0);
    walls.push_back(wall1);

    sf::RectangleShape wall2(sf::Vector2f(1600, 50));
    wall2.setFillColor(sf::Color(255, 255, 255, 255));
    wall2.setPosition(0, 0);
    walls.push_back(wall2);

    sf::RectangleShape wall3(sf::Vector2f(50, 1000));
    wall3.setFillColor(sf::Color(255, 255, 255, 255));
    wall3.setPosition(0, 0);
    walls.push_back(wall3);

    sf::RectangleShape wall4(sf::Vector2f(1600, 50));
    wall4.setFillColor(sf::Color(255, 255, 255, 255));
    wall4.setPosition(0, 950);
    walls.push_back(wall4);

    std::vector<sf::RectangleShape> bricks;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            bricks.push_back(sf::RectangleShape(sf::Vector2f(40, 10)));
            bricks[i + j].setPosition(sf::Vector2f(150, 100));
        }
    }

	using namespace std::chrono;

	auto previousTime = high_resolution_clock::now();

    sf::Keyboard::Key last;

    while (window.isOpen())
    {
        auto currentTime = high_resolution_clock::now();

        duration<float> deltaTime = currentTime - previousTime;

        previousTime = currentTime;

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed)
            {
                last = event.key.code;

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                {
                    x1 -= 20.f;
                }

                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                {
                    x1 += 20.f;
                }
            }         

            plateforme.setPosition(x1, y1);
        }

        ball.move(vectorBall);

        if (ball.getPosition().y <= 50 || ball.getPosition().y + ball.getRadius() * 2 + 50 >= windowHeight)
            vectorBall.y = -vectorBall.y;

        if (ball.getPosition().x <= 50 || ball.getPosition().x + ball.getRadius() * 2 + 50 >= windowWidth)
            vectorBall.x = -vectorBall.x;

        if (plateforme.getGlobalBounds().intersects(ball.getGlobalBounds()))
            vectorBall.y = -vectorBall.y;

        window.clear();

        window.draw(ball);
        window.draw(plateforme);
        window.draw(wall1);
        window.draw(wall2);
        window.draw(wall3);
        window.draw(wall4);

        window.display();
    }
	return 0;
}
