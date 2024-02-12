#include "TopSearchBar.hpp"


TopSearchBar::TopSearchBar(const sf::RenderWindow& window) {
   this->font.loadFromFile("src/fonts/CascadiaMono.ttf");

   bar.setSize(sf::Vector2f(window.getSize().x, 50));
   bar.setPosition(0, 0);
   bar.setFillColor(sf::Color::Blue);

   inputText.setFont(font);
   inputText.setString(inputString);
   inputText.setCharacterSize(24);
   inputText.setPosition(10, 10); 
   inputText.setFillColor(sf::Color::White);
}

void TopSearchBar::draw(sf::RenderWindow& window) {
   window.draw(bar);
   window.draw(inputText);
}

void TopSearchBar::handleInput(sf::Event event) {
   if (event.type == sf::Event::TextEntered) {
      if (event.text.unicode < 128) {
         inputString += static_cast<char>(event.text.unicode);
         inputText.setString(inputString);
      }
   }
}
