#include "Engine.h"
#include "Timer.h"

int main()
{
	Iw2DInit();
	// Setup the stage, create a sprite object, and a bitmap object
	Stage* stage = new Engine();
	Timer* timer = new Timer(1000/30);

	// Render loop
	while (1)
	{
		s3eDeviceYield(0);
		if	(s3eDeviceCheckQuitRequest()) break;
		timer->update();
	}
	delete stage;
	Iw2DTerminate();
	return 0;
}