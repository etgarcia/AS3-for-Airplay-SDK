#include "DisplayObjectContainer.h"


DisplayObjectContainer::DisplayObjectContainer(void)
{
}


DisplayObjectContainer::~DisplayObjectContainer(void)
{
}

DisplayObject* DisplayObjectContainer::addChild(DisplayObject* child)
{
	children.push_back(child);
	return child;
}

DisplayObject* DisplayObjectContainer::removeChild(DisplayObject* child)
{
	return child;
}

void DisplayObjectContainer::render()
{
	uint32 i;
	for (i = 0; i < children.size(); i++)
	{
		children[i]->render();
	}
}