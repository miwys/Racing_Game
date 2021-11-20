#pragma once
#include "Cvehicle.h"
#include "Ccar.h"
#include "Cmotorbike.h"
/**
 * @brief
 * klasa graficzna tor
 */
class CvehGUI
{
public:
	/**
 * @brief
 * konstruktor
 * @ param *_veh pojazd
 */
	CvehGUI(Cvehicle* _veh);
	/**
 * @brief
 * destruktor
 */
	~CvehGUI();
	/**
 * @brief
 * funkcja rysujaca pojazd
 * @param app ekran aplikacji
 */
	void drawVeh(sf::RenderWindow & app);
private:
	Cvehicle* veh;
};

