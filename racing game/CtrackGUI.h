#pragma once
#include <SFML/Graphics.hpp>
#include "Ctrack.h"
/**
 * @brief
 * klasa graficzna tor
 */
class CtrackGUI
{
public:
	/**
 * @brief
 * konstruktor
 * @param *track tor
 */
	CtrackGUI(Ctrack *track);
	/**
 * @brief
 * destruktor
 */
	~CtrackGUI();
	/**
 * @brief
 * funkcja rysujaca segment
 * @param app ekran aplikacji
 * @param c kolor segmentu
 * @param x1 wsp x na ekranie ntego segmentu
 * @param y1 wsp y na ekranie ntego segmentu
 * @param w1 szerokosc na ekranie ntego segmentu
 * @param x2 wsp x na ekranie n-1tego segmentu
 * @param y2 wsp y na ekranie n-1tego segmentu
 * @param w2 szerokosc na ekranie n-1tego segmentu
 */
	void drawSeg(sf::RenderWindow & app, sf::Color c, int x1, int y1, int w1, int x2, int y2, int w2);
	/**
 * @brief
 * funkcja drukujaca tor
 * @param app ekran aplikacji
 */
	void drawRoad(sf::RenderWindow & app);
	/**
 * @brief
 * funkcja rysujaca przeszkode
 * @param app ekran aplikacji
 * @param tx tekstura przeszkody
 * @param x wsp x na ekranie
 * @param y wsp y na ekranie
 * @param h skala wysokosci
 * @param w skala szerokosci
 */
	void drawObst(sf::RenderWindow & app, sf::Texture tx, int x, int y, float h, float w);
private:
	Ctrack *track;
};

