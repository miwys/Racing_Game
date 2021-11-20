#include "pch.h"
#include "CtrackGUI.h"


CtrackGUI::CtrackGUI(Ctrack *track)
{
	this->track = track;
}


CtrackGUI::~CtrackGUI()
{
}

void CtrackGUI::drawSeg(sf::RenderWindow & app, sf::Color c, int x1, int y1, int z1, int x2, int y2, int z2)
{
	sf::ConvexShape shape(4);
	shape.setFillColor(c);
	shape.setPoint(0, sf::Vector2f(x1 - z1, y1));
	shape.setPoint(1, sf::Vector2f(x2 - z2, y2));
	shape.setPoint(2, sf::Vector2f(x2 + z2, y2));
	shape.setPoint(3, sf::Vector2f(x1 + z1, y1));
	app.draw(shape);
	
}

void CtrackGUI::drawRoad(sf::RenderWindow & app)
{
	sf::Color grass;
	sf::Color curb;
	sf::Color road = sf::Color(50, 50, 50);
	float maxY;
	float curve = 0;
	float dc = 0;

	
	for (int n = track->getCurPos(); n < track->getCurPos() + 300; n++) {
		
		Cseg &seg = track->obj[n%track->getN()];
		seg.project(track->getN(), n, track->veh->getVehX() - curve / seg.getDim().x, track->getCurPos());

		curve += dc;
		dc += seg.getPos().x *10;

		if (n == 0) continue;
		if (seg.getPosWin().y > 768) continue;
		maxY = seg.getPosWin().y;
		

		Cseg seg2 = track->obj[(n - 1) % track->getN()];

		if ((n / 4) % 2 == 0) {
			curb = sf::Color(200, 10, 10);
			grass = sf::Color(10, 90, 10);
		}
		else {
			grass = sf::Color(10, 100, 10);
			curb = sf::Color(200, 200, 200);
		}


		drawSeg(app, grass, 0, seg2.getPosWin().y, 1024, 0, seg.getPosWin().y, 1024);
		drawSeg(app, curb, seg2.getPosWin().x, seg2.getPosWin().y, seg2.getPosWin().z*1.5, seg.getPosWin().x, seg.getPosWin().y, seg.getPosWin().z*1.5);
		drawSeg(app, road, seg2.getPosWin().x, seg2.getPosWin().y, seg2.getPosWin().z, seg.getPosWin().x, seg.getPosWin().y, seg.getPosWin().z);
		
	}
	for (int n = track->getCurPos() + 300; n > track->getCurPos(); n--)
	{
		
		if (n % 300 == 0) {
			Cseg &seg = track->obj[n%track->getN()];
			sf::Texture tx = seg.obst.getCow();
			drawObst(app, tx, seg.getPosWin().x, seg.getPosWin().y, seg.obst.getDimWin().y / seg.obst.getDim().y, seg.obst.getDimWin().x / seg.obst.getDim().x);
			}
	
	}
}

void CtrackGUI::drawObst(sf::RenderWindow & app, sf::Texture tx, int x, int y, float h, float w)
{
	sf::Sprite sp;
	sp.setTexture(tx);
	sp.setScale(w*20, h*20);
	sp.setPosition(x, y);
	app.draw(sp);
}


