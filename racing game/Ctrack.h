#pragma once
#include "pch.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Cobject.h"
#include "Cvehicle.h"
#include "Cseg.h"
/**
 * @brief
 * klasa tor
 */
class Ctrack
{
public:
	/**
 * @brief
 * konstruktor
 * @param *_veh pojazd
 */
	Ctrack(Cvehicle *_veh);
	/**
 * @brief
 * destruktor
 */
	~Ctrack();
	/**
 * @brief
 * funkcja odpowiadajaca za logike programu
 */
	void function();
	/**
 * @brief
 * funkcja zwracajaca numer aktualnego segentu
 * @return
 */
	int getCurPos();
	/**
 * @brief
 * funkcja zwracajaca ilosc segmentow
 * @return
 */
	int getN();
	Cvehicle* veh;
	std::vector<Cseg> obj;
private:
	int N;
	int pos;
	int curPos;
};



