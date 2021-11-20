#include "pch.h"
#include "Cobstacle.h"


Cobstacle::Cobstacle()
{
	cow.loadFromFile("images/cow.png");
	dim.x = cow.getSize().x;
	dim.y = cow.getSize().y;
	pos.x = pos.y = pos.z = 0;
	posWindow.x = posWindow.y = posWindow.z = 0;

}


Cobstacle::~Cobstacle()
{
}


sf::Texture Cobstacle::getCow()
{
	return cow;
}

sf::Vector2i Cobstacle::getDimWin()
{
	return dimWindow;
}

void Cobstacle::updateWin(int x, int y, int w, int h)
{
	posWindow.x = x;
	posWindow.y = y;
	dimWindow.x = w;
	dimWindow.y = h;
}
