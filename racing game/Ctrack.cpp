#include "pch.h"
#include "Ctrack.h"

using namespace std;

Ctrack::Ctrack(Cvehicle* _veh)
{
	Cseg seg;
	float x, y, z;
	x = y = z = 0;
	N = 1500;

	for (int i = 0; i < N; i++) {
		z = i * seg.getDim().y;

		if (i > 200 && i < 300)  x = i * 0.001 - 0.2;
		if (i > 300 && i < 400)  x = 0.4 - i * 0.001;
		seg.updatePos(x, y, z);
		obj.push_back(seg);
	}

	pos = 0;
	curPos = 0;
	veh = _veh;

}


Ctrack::~Ctrack()
{
}


void Ctrack::function()
{
	int segL = 250;
	pos += veh->getV();
	veh->updateVehX(obj[curPos].getPos().x);
	while (pos >= N * segL) pos -= N * segL;
	while (pos < 0)pos += N * segL;
	curPos = pos / segL;
}

int Ctrack::getCurPos()
{
	return curPos;
}

int Ctrack::getN()
{
	return N;
}




