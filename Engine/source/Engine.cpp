#include "Engine.h"

Engine::Engine()
{
	stageColor = 0xFFFFFFFF;
	frameRate = 30;
	BitmapObject* bitmap = new BitmapObject("largeAirplayLogo.bmp");
	Sprite* sprite = new Sprite();
	sprite->addChild(bitmap);
	this->addChild(sprite);
}

Engine::~Engine()
{
}