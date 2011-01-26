#include "Stage.h"

#define MS_PER_FRAME (1000 / 30)

int main()
{
	Iw2DInit();
	// Setup the stage, create a sprite object, and a bitmap object
	Stage* stage = new Stage(0xFFFFFFFF);

	// Render loop
	while (1)
	{
		s3eDeviceYield(0);
		int64 start = s3eTimerGetMs();
		if	(s3eDeviceCheckQuitRequest()) break;
		stage->render(); // RENDER STAGE!
		while ((s3eTimerGetMs() - start) < MS_PER_FRAME)
		{
			int32 yield = (int32) (MS_PER_FRAME - (s3eTimerGetMs() - start));
			if (yield < 0) break;
			s3eDeviceYield(yield);
		}
	}
	delete stage;
	Iw2DTerminate();
	return 0;
}