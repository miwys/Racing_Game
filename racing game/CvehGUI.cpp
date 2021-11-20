#include "pch.h"
#include "CvehGUI.h"


CvehGUI::CvehGUI(Cvehicle* _veh)
{
	veh = _veh;
}


CvehGUI::~CvehGUI()
{
}


void CvehGUI::drawVeh(sf::RenderWindow & app)
{
	veh->updatePosWin((1024 - veh->getDim().x) / 2, (768 - veh->getDim().y) - 100 + veh->getPos().y);
	
	sf::Sprite sr;
	sf::Texture tx;
	tx.loadFromFile(veh->getVehFile());
	sr.setTexture(tx);
	sr.setPosition(veh->getPosWin().x, veh->getPosWin().y);
	sr.setTextureRect(sf::IntRect(veh->getDim().x, 0, veh->getDim().x, veh->getDim().y));

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		sr.setTextureRect(sf::IntRect(2 * veh->getDim().x, 0, veh->getDim().x, veh->getDim().y));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		sr.setTextureRect(sf::IntRect(0 * veh->getDim().x, 0, veh->getDim().x, veh->getDim().y));
	}
	
	app.draw(sr);
}
