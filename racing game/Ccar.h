#pragma once
#include "Cvehicle.h"
/**
 * @brief
 * klasa samochod
 */
class Ccar :
	public Cvehicle
{
public:
	/**
 * @brief
 * konstruktor
 */
	Ccar();
	/**
 * @brief
 * destruktor
 */
	~Ccar();
	virtual void drive();
	virtual void updateVehX(float curve);
};

