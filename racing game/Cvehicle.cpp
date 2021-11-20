#include "pch.h"
#include "Cvehicle.h"

Cvehicle::~Cvehicle()
{
}

void Cvehicle::updatePosWin(int x,int y)
{
	posWindow.x = x;
	posWindow.y = y;

}

int Cvehicle::getV()
{
	return v;
}

float Cvehicle::getVehX()
{
	return pos.x;
}

string Cvehicle::getVehFile()
{
	return file;
}




