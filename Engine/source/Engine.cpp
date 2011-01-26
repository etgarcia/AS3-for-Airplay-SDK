#pragma once
#include "Stage.h"

class Engine : public Stage
{
public:
	Engine(uint32 stageColor);
	~Engine(void);
	void render();
};

Engine::Engine(uint32 stageColor)
{
	this->stageColor = stageColor;
	Sprite* sprite = new Sprite();
	BitmapObject* bitmap = new BitmapObject("largeAirplayLogo.bmp");
	sprite->addChild(bitmap);
	this->addChild(sprite);
}

Engine::~Engine()
{
}

void Engine::render()
{
	Iw2DSurfaceClear(stageColor);
	DisplayObjectContainer::render();
}