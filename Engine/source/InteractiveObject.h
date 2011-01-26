#pragma once
#include "DisplayObject.h"
class InteractiveObject :
	public DisplayObject
{
public:
	InteractiveObject(void);
	virtual ~InteractiveObject(void);
	virtual void render();
};

