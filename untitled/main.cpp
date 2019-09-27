#include "SFML/Graphics.hpp"
#include <iostream>

using namespace std;


int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML WORKS!");
    sf::RectangleShape rectangle(sf::Vector2f(200, 40));
    rectangle.setFillColor(sf::Color(0, 255, 0));
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
            }
        }
        window.clear();
        window.display();
    }
}
