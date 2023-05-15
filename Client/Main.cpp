#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "Client");
	

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;

			case sf::Event::KeyPressed:
				if (event.key.code == sf::Keyboard::Escape) {
					std::cout << "Esc pressed\n";
				}
				else if (event.key.code == sf::Keyboard::E) {
					std::cout << "Journal opened (E)\n";
				}
				break;

			case sf::Event::MouseButtonPressed:
				if (event.key.code == sf::Mouse::Left) {
					std::cout << "LM down\n";
				}
				break;

			case sf::Event::MouseButtonReleased:
				if (event.key.code == sf::Mouse::Left) {
					std::cout << "LM released\n";
				}
				break;

			default:
				break;
			}
		}

		window.clear();
		
		window.display();
	}

	

}