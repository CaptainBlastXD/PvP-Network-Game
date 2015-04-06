#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include "Game.h"

using namespace sf;

int main()
{
	int LogoY = 260;
	int LogoX = 5;
	int PlayY = 540;
	int PlayX = 200;
	int OptionsY = 490;
	int OptionsX = 300;
	RenderWindow window(VideoMode(1280, 1024), "PvP Network");
	Font Mfont;
	Mfont.loadFromFile("28 Days Later.ttf");
	Text logo("PvP Network", Mfont);
	logo.setCharacterSize(150);
	logo.setStyle(sf::Text::Bold);
	logo.setColor(sf::Color::Red);
	logo.setPosition (LogoY, LogoX);
	Text play("PLAY", Mfont);
	play.setCharacterSize(100);
	play.setStyle(Text::Bold);
	play.setColor(Color::Red);
	play.setPosition (PlayY, PlayX);
	Text options("Options", Mfont);
	options.setCharacterSize(100);
	options.setColor(Color::Red);
	options.setPosition (OptionsY, OptionsX);
	Music music;
    if (!music.openFromFile("2.2.wav"))
        return EXIT_FAILURE;
	while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
		}
		window.clear();
		if (Keyboard::isKeyPressed(sf::Keyboard::Space))
		{
		MyFunc();
		}
		else if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			return 0;
		}
	
        window.draw(logo);
		window.draw(play);
		window.draw(options);
        window.display();
    }
    return EXIT_SUCCESS;
}
