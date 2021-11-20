#include "pch.h"
#include "Ccar.h"

using namespace sf;

Ccar::Ccar()
{
	v = 0;
	vMax = 1600;
	a = 50;
	pos.x = 0;
	pos.y = 0;
	pos.z = 0;
	file = "images/car.png";
	sf::Texture tx;
	tx.loadFromFile(file);
	dim.x = tx.getSize().x / 3;
	dim.y = tx.getSize().y;
}

Ccar::~Ccar()
{
}

void Ccar::updateVehX(float curve)
{
	pos.x -= curve * v * 0.0005;
}

void Ccar::drive()
{
	if (Keyboard::isKeyPressed(Keyboard::Right)) {
		pos.x += 0.07;
	}
	if (Keyboard::isKeyPressed(Keyboard::Left)) {
		pos.x -= 0.07;
	}

	if (Keyboard::isKeyPressed(Keyboard::Up)) {
		if (v < vMax) {
			v += a;
		}
		else
		{
			v = vMax;
		}
	}
	else
	{
		if (v > 0) {
			v -= a / 10;
		}
	}

	if (Keyboard::isKeyPressed(Keyboard::Down)) {
		if (v > -vMax / 2) {
			v -= a / 2;
		}
		else
		{
			v = -vMax / 2;
		}
	}
	else
	{
		if (v < 0) {
			v += a / 10;
		}
	}
}







