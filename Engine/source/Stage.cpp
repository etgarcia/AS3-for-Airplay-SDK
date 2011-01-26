#include "Stage.h"

Stage::Stage() :
	stageColor(0),
	frameRate(24)
{
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


float Stage::getMsPerFrame()
{
	return 1000 / frameRate;
}