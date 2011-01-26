#pragma once
#include "EventDispatcher.h"
class DisplayObject :
	public EventDispatcher
{
public:
	DisplayObject(void);
	virtual ~DisplayObject(void);
	float x;
	float y;
	float z;
	float width;
	float height;

	virtual void render();
};

