#pragma once
#include "Cvehicle.h"
/**
 * @brief
 * klasa motocykl
 */
class Cmotorbike :
	public Cvehicle
{
public:
	/**
 * @brief
 * konstruktor
 */
	Cmotorbike();
	/**
 * @brief
 * destruktor
 */
	~Cmotorbike();
	virtual void drive();
	virtual void updateVehX(float curve);
};

