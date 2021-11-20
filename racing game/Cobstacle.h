#pragma once
#include "Cobject.h"
/**
 * @brief
 * klasa przeszkoda
 */
class Cobstacle :
	public Cobject
{
public:
	/**
 * @brief
 * konstruktor
 */
	Cobstacle();
	/**
 * @brief
 * destruktor
 */
	~Cobstacle();
	/**
 * @brief
 * funkcja zwracajaca teksture przeszkody
 * @return
 */
	sf::Texture getCow();
	/**
 * @brief
 * funkcja zwracajaca wymiary przeszkody na ekranie
 * @return
 */
	sf::Vector2i getDimWin();
	/**
 * @brief
 * funkcja nadpisujaca pozycje i wymiary przeszkody na ekranie
 * @param x pozycja x
 * @param y pozycja y
 * @param w szekrokosc
 * @param h wysokosc
 */
	void updateWin(int x, int y, int w, int h);
private:
	sf::Texture cow;
	sf::Vector2i dimWindow;
};

