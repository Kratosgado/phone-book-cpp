#include "AppView.hpp"

AppView::AppView(const sf::RenderWindow& window) :
   camera(sf::FloatRect(0, 0, window.getSize().x, window.getSize().y)),
   TopSearchBar(window),
   BottomNavBar(window)
{
this->font.loadFromFile("src/fonts/CascadiaMono.ttf");

}

sf::View AppView::getCameraView() const { return this->camera; }

void AppView::draw(sf::RenderWindow& window) {
   // this->drawBottomBar(window);
   TopSearchBar::draw(window);
   BottomNavBar::draw(window);


   // sf::Text centerText;
   // centerText.setFont(this->font);
   // // centerText.setCharacterSize(14);
   // centerText.setString(sf::String("Center Text"));
   // centerText.setFillColor(sf::Color::White);
   // centerText.setPosition(0, 0);
   // window.draw(centerText);
}

void AppView::handleInput(sf::Event event) {
   TopSearchBar::handleInput(event);
}