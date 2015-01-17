#include "AnimatedEntity.h"


AnimatedEntity::AnimatedEntity(void) {}
AnimatedEntity::~AnimatedEntity(void) {}


void AnimatedEntity::init(Texture *spritesheet, int x, int y) {
	sprite.setTexture(*spritesheet);
	sprite.setPosition(x,y);
	frame = delay = 0;
}

void AnimatedEntity::update() {
}

void AnimatedEntity::render(RenderWindow *window) {
	//animació de prova
	sprite.setTextureRect(IntRect(SPRITE_WIDTH*getFrame(), 0, SPRITE_WIDTH, SPRITE_HEIGHT));
	nextFrame(8);
	//////////
	window->draw(sprite);
}


void AnimatedEntity::nextFrame(int max) {
	delay++;
	if(delay == FRAME_DELAY)
	{
		frame++;
		frame%=max;
		delay = 0;
	}
}

int AnimatedEntity::getFrame() {
	return frame;
}



