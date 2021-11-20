#pragma once
#include "Cobject.h"
#include "Cobstacle.h"
/**
 * @brief
 * klasa segment
 */
class Cseg :
	public Cobject
{
public:
	/**
 * @brief
 * konstruktor
 */
	Cseg();
	/**
 * @brief
 * destruktor
 */
	~Cseg();
	/**
 * @brief
 * funkcja przeksztalniajaca wspolrzedne torowe na ekranowe
 * @param N ilosc segmentow
 * @param n numer segmentu
 * @param vehX przesuniecie seg
 * @param curPos numer pierwszego segmentu
 */
	void project(int N, int n, float vehX, int curPos);
	/**
 * @brief
 * funkcja nadpisujaca pozycje segmentu na torze 
 * @param x pozycja x
 * @param y pozycja y
 * @param z pozycja z
 */
	void updatePos(float x, float y, float z);
	Cobstacle obst;
private:
	
};

