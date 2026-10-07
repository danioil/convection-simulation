#include <SFML/Graphics.hpp>
#include <optional>

int main()
{
    sf::RenderWindow window(sf::VideoMode({ 800u, 600u }), "Convection");
    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear(sf::Color::Black);
        window.display();
    }
}