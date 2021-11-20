#pragma once
#include <SFML/Graphics.hpp>
using namespace std;
/**
 * @brief
 * klasa wirtualna obiekt
 */
class Cobject
{
public:
	/**
 * @brief
 * wirtualny destruktor
 */
	virtual ~Cobject();
	/**
 * @brief
 * funkcja zwracajaca pozycje objectu na torze
 * @return 
 */
	sf::Vector3f getPos();
	/**
 * @brief
 * funkcja zwracajaca pozycje objectu na ekranie
 * @return
 */
	sf::Vector3f getPosWin();
	/**
 * @brief
 * funkcja zwracajaca wymiary objectu
 * @return
 */
	sf::Vector2f getDim();
protected:
	sf::Vector3f pos;
	sf::Vector3f posWindow;
	sf::Vector2f dim;
};

