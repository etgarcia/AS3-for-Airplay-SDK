#pragma once
#include "DisplayObjectContainer.h"
#include "Iw2D.h"
#include "Sprite.h"
#include "BitmapObject.h"

class Stage :
	public DisplayObjectContainer
{
public:
	Stage();
	~Stage(void);
	void render();
	float getMsPerFrame();
protected:
	uint32 stageColor;
	uint16 frameRate;
};