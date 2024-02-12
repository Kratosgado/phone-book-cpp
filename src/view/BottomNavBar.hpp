#if !defined(BottomNavBar_H)
#define BottomNavBar_H
#include <SFML/Graphics.hpp>


class BottomNavBar {
private:
   sf::RectangleShape bar;
   sf::Text buttonText[3];
   sf::Font font;

public:
   BottomNavBar(const sf::RenderWindow& window) {
      this->font.loadFromFile("src/fonts/CascadiaMono.ttf");

      // create the bar
      bar.setSize(sf::Vector2f(window.getSize().x, 50));
      bar.setPosition(0, window.getSize().y - 50);
      bar.setFillColor(sf::Color::Blue);

      // create the buttons
      for (int i = 0; i < 3; i++) {
         buttonText[i].setFont(font);
         buttonText[i].setString("Button " + std::to_string(i + 1));
         buttonText[i].setCharacterSize(24);
         buttonText[i].setPosition(i * window.getSize().x / 3, window.getSize().y - 50);
         buttonText[i].setFillColor(sf::Color::White);
      }
   }

   void draw(sf::RenderWindow& window) {
      window.draw(bar);
      for (int i = 0; i < 3; i++) {
         window.draw(buttonText[i]);
      }
   }

};

#endif // BottomNavBar_H

