#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>

using namespace sf;

int main()
{
	int LogoY = 550;
	int LogoX = 5;
	int PlayY = 840;
	int PlayX = 400;
	int OptionsY = 801;
	int OptionsX = 500;
	RenderWindow window(sf::VideoMode(1920, 1080), "PvP Network");
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
        window.draw(logo);
		window.draw(play);
		window.draw(options);
        window.display();
    }
    return EXIT_SUCCESS;
}
