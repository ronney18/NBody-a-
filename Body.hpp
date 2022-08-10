/* Name: Ronney Sanchez
 * Date: October 24, 2018
 * Course: COMP2040 Computing 4
 * Assignment: PS3a
 */

#ifndef Body_INCLUDED
#define Body_INCLUDED
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <string>
using namespace std;

class Body : public sf::Drawable
{
	public:
		Body(float size, string xPosition, string yPosition, string xVelocity, string yVelocity, string myMass, string filename);

        private:
		sf::Image image;
		sf::Texture texture;
		sf::Sprite sprite;
		sf::Vector2f position;
		sf::Vector2f velocity;
		double mass;
		string filename;
		void draw(sf::RenderTarget& target, sf::RenderStates state) const;
		friend istream& operator>>(istream& in, Body& body);
};
#endif
