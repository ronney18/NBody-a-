/* Name: Ronney Sanchez
 * Date: October 24, 2018
 * Course: COMP2040 Computing 4
 * Assignment: PS3a
 */

#include "Body.hpp"

Body::Body(float size, string xPosition, string yPosition, string xVelocity, string yVelocity, string myMass, string filename)
{
	position.x = stof(xPosition.c_str());
	position.y = stof(yPosition.c_str());

	velocity.x = stof(xVelocity.c_str());
	velocity.y = stof(yVelocity.c_str());

	mass = stof(myMass);

	this->filename = filename;

	image.loadFromFile(filename);

	texture.loadFromImage(image);

	sprite.setTexture(texture);

	sprite.setOrigin(sf::Vector2f(sprite.getLocalBounds().width, sprite.getLocalBounds().height)/2.f);
	sprite.setPosition((size/2.f), (size/2.f));
	sprite.move((position.x/10e+8), (position.y/10e+8));
}

void Body::draw(sf::RenderTarget& target, sf::RenderStates state) const
{
	target.draw(sprite, state);
}

istream& operator>>(istream& in, Body& body)
{
	in >> body.position.x >> body.position.y >> body.velocity.x >> body.velocity.y >> body.mass >> body.filename;
	body.image.loadFromFile(body.filename);
        body.texture.loadFromImage(body.image);
        body.sprite.setTexture(body.texture);
        body.sprite.setPosition((body.position.x), (body.position.y));
	return in;
}
