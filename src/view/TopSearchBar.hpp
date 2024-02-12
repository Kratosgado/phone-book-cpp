#if !defined(TopSearchBar_H)
#define TopSearchBar_H

#include <SFML/Graphics.hpp>

class TopSearchBar {
private:
   sf::RectangleShape bar;
   sf::Text inputText;
   sf::Font font;
   std::string inputString;

public:
   TopSearchBar(const sf::RenderWindow& window);
   void draw(sf::RenderWindow& window);
   void handleInput(sf::Event event);
};

#endif // TopSearchBar_H
