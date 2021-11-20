#include "pch.h"
#include "Cmotorbike.h"

using namespace sf;

Cmotorbike::Cmotorbike()
{
	v = 0;
	vMax = 1800;
	a = 70;
	pos.x = 0;
	pos.y = 0;
	pos.z = 0;
	file = "images/bike.png";
	sf::Texture tx;
	tx.loadFromFile(file);
	dim.x = tx.getSize().x / 3;
	dim.y = tx.getSize().y;
}

Cmotorbike::~Cmotorbike()
{
}

void Cmotorbike::updateVehX(float curve)
{
	pos.x -= curve * v * 0.0003;
}

void Cmotorbike::drive()
{
	if (Keyboard::isKeyPressed(Keyboard::Right)) {
		pos.x += 0.03;
	}
	if (Keyboard::isKeyPressed(Keyboard::Left)) {
		pos.x -= 0.03;
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


