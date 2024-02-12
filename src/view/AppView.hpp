#if !defined(AppView_H)
#define AppView_H

#include <SFML/Graphics.hpp>
#include "BottomNavBar.hpp"
#include "TopSearchBar.hpp"

class AppView : public BottomNavBar, TopSearchBar {
private:
   sf::Font font;
   sf::View camera;

   void drawBottomBar(sf::RenderWindow& window);

public:
   AppView(const sf::RenderWindow& window);

   void draw(sf::RenderWindow& window);
   void handleInput(sf::Event event);

   sf::View getCameraView() const;
};

#endif // AppView_H
