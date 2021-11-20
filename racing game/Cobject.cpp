#include "pch.h"
#include "Cobject.h"


Cobject::~Cobject()
{
}

sf::Vector3f Cobject::getPos()
{
	return pos;
}

sf::Vector3f Cobject::getPosWin()
{
	return posWindow;
}

sf::Vector2f Cobject::getDim()
{
	return dim;
}
