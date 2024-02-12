#include <SFML/Graphics.hpp>
#include "src/view/AppView.hpp"


int main() {
   sf::RenderWindow window(sf::VideoMode(300, 500), "Phone Book");
   window.setVerticalSyncEnabled(true);
   sf::Color backgroundColor = sf::Color(21, 29, 45);

   // instantiate appview
   AppView appView(window);

   while (window.isOpen()) {
      sf::Event event;
      while (window.pollEvent(event)) {
         if (event.type == sf::Event::Closed) window.close();
         appView.handleInput(event);
      }
      window.clear(backgroundColor);
      appView.draw(window);

      window.setView(appView.getCameraView());
      window.display();
   }
   return 0;
}