#pragma once
#include "Includes.h"


/*
	This class is for every animated sprite on the game. It needs the texture, the initial position of the sprite and the paddings. 
	The paddings are the pixel offset on the sprite in the collisions, so the picture shown fits well in it and there are no invisible spaces.
	The sprite size must be greater than the offset.
*/
class AnimatedEntity
{
public:
	AnimatedEntity(void);
	~AnimatedEntity(void);

	static const int FRAME_DELAY	=	4;
	static const int SPRITE_WIDTH   =	100;
    static const int SPRITE_HEIGHT	=	100;

	//BASIC OPERATIONS:
	//Update calculates the gravity force and render draws the sprite on screen.
	
	void init(Texture *spritesheet, int x, int y);
	void update();
	void render(RenderWindow *window);


	//ANIMATION OPERATIONS:
	//nextFrame() calculates the actual frame and must be called once per render (if there is an animation running).
	
	int getFrame();
	void nextFrame(int max);

private:
	Sprite sprite;
	int paddingLeft, paddingRight, paddingTop, paddingFloor;
	int frame;
	int delay;

};

