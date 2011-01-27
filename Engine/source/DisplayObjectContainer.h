#pragma once
#include "InteractiveObject.h"

class DisplayObjectContainer :
	public InteractiveObject
{
public:
	DisplayObjectContainer(void);
	virtual ~DisplayObjectContainer(void);
	DisplayObject* addChild(DisplayObject* child);
	DisplayObject* removeChild(DisplayObject* child);
	void render();
	void passOnEvent(Event* evnt);
protected:
	std::vector<DisplayObject*> children;
};

