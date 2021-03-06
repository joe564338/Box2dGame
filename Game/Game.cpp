// Game.cpp : Defines the entry point for the console application.
//


#include "SFML/Graphics.hpp"

#include "World.h"
int main()
{
	b2Vec2 noGrav(0.0f, 0.0f);//top down so no need for gravity
	b2World box2DWorld(noGrav);
	b2World* worldPtr = &box2DWorld;
	World world(worldPtr); 

	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}

