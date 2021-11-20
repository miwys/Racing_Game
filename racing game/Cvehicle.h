#pragma once
#include "Cobject.h"
#include <vector>
#include <SFML/Graphics.hpp>
/**
 * @brief
 * klasa wirtualna pojazd
 */
class Cvehicle :
	public Cobject
{
public:
	/**
 * @brief
 * wirtualny destruktor
 */
	virtual ~Cvehicle();
	/**
 * @brief
 * funkcja wirtualna sterujaca pojazdem
 */
	virtual void drive() = 0;
	/**
 * @brief
 * funkcja wirtualna symulujaca skrecanie
 * param zakrzywienie toru
 */
	virtual void updateVehX(float) = 0;
	/**
 * @brief
 * funkcja nadpsujaca pozycje pojazdu na ekranie
 * @param x pozycja x
 * @param x pozycja y
 */
	void updatePosWin(int x,int y);
	/**
 * @brief
 * funkcja zwracajaca predkosc pojazdu
 * @return
 */
	int getV();
	/**
 * @brief
 * funkcja zwracajaca pozycje x pojazdu na torze
 * @return
 */
	float getVehX();
	/**
 * @brief
 * funkcja zwracajaca sciezke do obrazu pojazdu
 * @return
 */
	string getVehFile();
protected:
	int vMax;
	int v;
	int a;
	string file;
};

