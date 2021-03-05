#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "StarShip");
	
	sf::Texture BackgroundTexture;
	BackgroundTexture.loadFromFile("background.png");
	
	sf::Sprite background(BackgroundTexture);

	while (window.isOpen())
	{
		sf::Event event;
		
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
				
			}
		}
		
		window.clear();
		window.draw(background);
		window.display();
	}

}