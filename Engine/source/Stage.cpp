#include "Stage.h"

Stage::Stage(uint32 stageColor) :
	stageColor(stageColor)
{
	BitmapObject* bitmap = new BitmapObject("largeAirplayLogo.bmp");
	this->addChild(bitmap);
}


Stage::~Stage(void)
{
	for (uint32 i = 0; i < children.size(); i++)
		delete children[i];
	children.clear();
}


void Stage::render()
{
	Iw2DSurfaceClear(stageColor);
	DisplayObjectContainer::render();
}