#include "Engine.h"

int main()
{
	Iw2DInit();
	// Setup the stage, create a sprite object, and a bitmap object
	Stage* stage = new Engine();

	// Render loop
	while (1)
	{
		s3eDeviceYield(0);
		int64 start = s3eTimerGetMs();
		if	(s3eDeviceCheckQuitRequest()) break;
		stage->render(); // RENDER STAGE!
		while ((s3eTimerGetMs() - start) < stage->getMsPerFrame())
		{
			int32 yield = (int32) (stage->getMsPerFrame() - (s3eTimerGetMs() - start));
			if (yield < 0) break;
			s3eDeviceYield(yield);
		}
	}
	delete stage;
	Iw2DTerminate();
	return 0;
}