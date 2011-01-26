#include "Stage.h"

void stageRender(Event evnt)
{
	Stage* stage = (Stage*)evnt.stage;
	stage->render();
}

Stage::Stage() :
	stageColor(0),
	frameRate(24)
{
	stage = this;
	addEventListener("timer", stageRender);
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
	return 1000 / (float)frameRate;
}