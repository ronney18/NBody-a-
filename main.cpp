/* Name: Ronney Sanchez
 * Date: October 24, 2018
 * Course: COMP2040 Computing 4
 * Assignment: PS3a
 */

#include <vector>
#include <memory>
#include "Body.hpp"

int main(int argc, char* argv[])
{
	if(argc != 1)
	{
		cout << "ERROR: execute file with < [filename] argument!" << endl;
	       return -1;	
	}
	string xPos, yPos, xVelocity, yVelocity, mass, filename;

	unsigned int numParticles;
	float size;
	
	cin >> numParticles >> size;

	float windowSize = (size/5e+8);

	vector<shared_ptr<Body>> vecBody;
	for(unsigned int i = 0; i < numParticles; i++)
	{
		cin >> xPos >> yPos >> xVelocity >> yVelocity >> mass >> filename;
		auto body = make_shared<Body>(windowSize, xPos, yPos, xVelocity, yVelocity, mass, filename);
		vecBody.push_back(body);

	}

	sf::RenderWindow window(sf::VideoMode(windowSize, windowSize), "The Solar System!");
	
	sf::Image image;
	
	if(!image.loadFromFile("nbody/starfield.jpg"))
	{
		cerr << "ERROR: Unable to open \"starfield.jpg\"!" << endl;
		exit(1);

	}

	sf::Texture texture;
	texture.loadFromImage(image);
	sf::Sprite sprite;
	sprite.setTexture(texture);
	while(window.isOpen())
	{
         	sf::Event event;

                while(window.pollEvent(event))
                {
                 	if(event.type == sf::Event::Closed)
			{
                         	window.close();
			}
		}
                window.clear();
		window.draw(sprite);
		for(auto obj : vecBody)
		{
			window.draw(*obj);
		}	
		window.display();
	}
	return 0;
}
