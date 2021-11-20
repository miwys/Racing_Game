
/**
  * @mainpage wyscigi
  * Michal Wyscoki gr33ip.
  */
#include "pch.h"
#include "Ccar.h"
#include "CvehGUI.h"
#include "Ctrack.h"
#include "CtrackGUI.h"
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;


int main()
{
	RenderWindow app(VideoMode(1024, 768), "go");
	app.setFramerateLimit(60);

	Cvehicle *wsk_v;
	Ccar sam;
	wsk_v = &sam;

	Ctrack tor(wsk_v);
	Ctrack* wsk_t = &tor;

	CtrackGUI gui(wsk_t);
	CvehGUI gui2(wsk_v);
	
	

	

	while (app.isOpen())
	{
		Event e;
		while (app.pollEvent(e))
		{
			if (e.type == Event::Closed)
				app.close();
		}
		
		app.clear(Color(0, 0, 0));

		wsk_v->drive();

		tor.function();
		
		gui.drawRoad(app);

		gui2.drawVeh(app);

		app.display();
	}
	return 0;
}