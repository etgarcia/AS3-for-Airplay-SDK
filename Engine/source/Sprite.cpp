#include "Sprite.h"


Sprite::Sprite(void)
{
}


Sprite::~Sprite(void)
{
	for (uint32 i = 0; i < children.size(); i++)
		delete children[i];
	children.clear();
}
