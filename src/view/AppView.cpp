#include "AppView.hpp"

AppView::AppView(const sf::RenderWindow& window) :
   camera(sf::FloatRect(0, 0, window.getSize().x, window.getSize().y)) {
   this->font.loadFromFile("../fonts/CascadiaMono.ttf");
}

sf::View AppView::getCameraView() const { return this->camera; }

void AppView::draw(sf::RenderWindow& window) {
   this->drawBottomBar(window);

   sf::Text centerText;
   centerText.setFont(this->font);
   // centerText.setCharacterSize(14);
   centerText.setString(sf::String("Center Text"));
   centerText.setFillColor(sf::Color::White);
   centerText.setPosition(0, 0);
   window.draw(centerText);
}

void AppView::drawBottomBar(sf::RenderWindow& window) {
   this->bottomBar.setSize(sf::Vector2f(this->camera.getSize().x, this->camera.getSize().y * 0.1));
   this->bottomBar.setPosition(sf::Vector2f(0, this->camera.getSize().y - (this->camera.getSize().x * 0.1)));
   this->bottomBar.setFillColor(sf::Color::Blue);
   window.draw(this->bottomBar);
}