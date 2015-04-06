#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include "Game.h"

using namespace sf;

	void MyFunc()
	{
		RenderWindow window(VideoMode(1280, 1024), "PvP Network");
		Texture texture;
		texture.loadFromFile("image.png");

		Sprite main;
		main.setTexture(texture);
		main.setTextureRect(sf::IntRect(50, 50, 50, 50));
		main.setColor(sf::Color(255, 255, 255, 200));
		main.setPosition(50, 50);
		while (window.isOpen())
    {
    		Event event;
    		while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
		}
			window.clear();
			if (Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			
		}
    		window.draw(main);
    		window.display();
		
		}
	}
