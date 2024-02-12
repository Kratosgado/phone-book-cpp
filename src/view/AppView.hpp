#if !defined(AppView_H)
#define AppView_H

#include <SFML/Graphics.hpp>

class AppView {
private:
   sf::Font font;
   sf::View camera;
   sf::RectangleShape bottomBar;

   void drawBottomBar(sf::RenderWindow& window);

public:
   AppView(const sf::RenderWindow& window);

   void draw( sf::RenderWindow& window);

   sf::View getCameraView() const;
};

#endif // AppView_H
