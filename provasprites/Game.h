#pragma once
#include "Includes.h"
#include "TextureManager.h"
#include "AnimatedEntity.h"

class Game
{
public:
	Game(void);
	~Game(void);

	void init();
	void mainLoop();
	void finalize();

	void processInput();
	void update();
	void render();

private:
	RenderWindow* window;
	TextureManager textureManager;

	///prova
	AnimatedEntity animacio;
	Sprite bkg;

};

