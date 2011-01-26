#pragma once
#include "DisplayObject.h"
#include "Iw2D.h"
#include <string>

class BitmapObject :
	public DisplayObject
{
public:
	BitmapObject(char* filename);
	~BitmapObject(void);
	void render();
private:
	CIw2DImage* image;
};