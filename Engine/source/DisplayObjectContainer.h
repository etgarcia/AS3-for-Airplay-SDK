#pragma once
#include "InteractiveObject.h"
#include <vector>

class DisplayObjectContainer :
	public InteractiveObject
{
public:
	DisplayObjectContainer(void);
	virtual ~DisplayObjectContainer(void);
	DisplayObject* addChild(DisplayObject* child);
	DisplayObject* removeChild(DisplayObject* child);
	void render();
protected:
	std::vector<DisplayObject*> children;
};
