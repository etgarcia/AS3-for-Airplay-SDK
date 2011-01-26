#include "BitmapObject.h"

BitmapObject::BitmapObject(char* filename)
{
	image = Iw2DCreateImage(filename);
	width = image->GetWidth();
	height = image->GetHeight();
}


BitmapObject::~BitmapObject(void)
{
	delete image;
}

void BitmapObject::render()
{
	CIwSVec2 topleft = CIwSVec2(int16(x),int16(y));
	CIwSVec2 size = CIwSVec2(int16(width), int16(height));
	Iw2DDrawImage(image, topleft, size);
	Iw2DSurfaceShow();
}