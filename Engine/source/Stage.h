#pragma once
#include "DisplayObjectContainer.h"
#include "Iw2D.h"
#include "Sprite.h"
#include "BitmapObject.h"

class Stage :
	public DisplayObjectContainer
{
public:
	Stage(uint32 stageColor);
	~Stage(void);
	void render();
protected:
	uint32 stageColor;
};

