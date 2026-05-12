#include <SFML/Graphics.hpp>

int main()
{
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    // Create a circle
    sf::CircleShape circle(50.0f);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(100.0f, 250.0f);

    float speed = 0.2f;

    // Game loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Move circle
        circle.move(speed, 0);

        // Reset position if out of screen
        if (circle.getPosition().x > 800)
            circle.setPosition(0, 250.0f);

        // Clear window
        window.clear();

        // Draw objects
        window.draw(circle);

        // Display on screen
        window.display();
    }

    return 0;
}