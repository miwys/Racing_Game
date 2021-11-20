#include "pch.h"
#include "Cseg.h"


Cseg::Cseg()
{
	pos.x = pos.y = pos.z = 0;
	posWindow.x = posWindow.y = posWindow.z = 0;
	dim.x = 5000;
	dim.y = 250;
}


Cseg::~Cseg()
{
}

void Cseg::project(int N, int n, float vehX, int curPos)
{
	float scale;
	float x;
	float y;
	float z;
	
	x = vehX * dim.x;
	y = pos.y + 2000;

	if (n >= N) {
		z = (curPos - N) * dim.y;
	}
	else {
		z = curPos * dim.y;
	}

	scale = 0.84 / (pos.z - z);
	posWindow.x = (1 + scale * (pos.x - x)) * 1024 / 2;
	posWindow.y = (1 - scale * (pos.y - y)) * 768 / 2;
	posWindow.z = scale * dim.x * 768 / 2;

	obst.updateWin(posWindow.x, posWindow.y, scale * obst.getDim().x * 1024 / 2, scale * obst.getDim().y * 768 / 2);
	
}

void Cseg::updatePos(float x, float y, float z)
{
	pos.x = x;
	pos.y = y;
	pos.z = z;
}
