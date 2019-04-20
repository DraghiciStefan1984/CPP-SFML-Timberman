// HelloSFML.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	VideoMode videoMode(1920, 1080);
	RenderWindow window(videoMode, "Timber!!!", Style::Fullscreen);

	while (window.isOpen())
	{
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}
		window.clear();
		window.display();
	}
	return 0;
}
