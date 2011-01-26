// Alright, just learning how to use AirPlay SDK
#include "Iw2D.h"

// Attempt to lock to 30 frames per second
#define	MS_PER_FRAME (1000 / 25)

int main()
{
	Iw2DInit();
	CIw2DImage* g_AirplayLogo = Iw2DCreateImage("largeAirplayLogo.bmp");
	while (1)
	{
		int64 start = s3eTimerGetMs();
		if	(s3eDeviceCheckQuitRequest())
			break;
		// Clear the screen
		Iw2DSurfaceClear(0xffffffff);
		CIwSVec2 topLeft = CIwSVec2((int16)(Iw2DGetSurfaceWidth() / 2 - g_AirplayLogo->GetWidth() / 2), 
			(int16)(Iw2DGetSurfaceHeight() / 2 - g_AirplayLogo->GetHeight() / 2));
		CIwSVec2 size = CIwSVec2((int16)g_AirplayLogo->GetWidth(), (int16)g_AirplayLogo->GetHeight());
		Iw2DDrawImage(g_AirplayLogo, topLeft, size);
		Iw2DSurfaceShow();

		// Attempt frame rate
		while ((s3eTimerGetMs() - start) < MS_PER_FRAME)
		{
			int32 yield = (int32) (MS_PER_FRAME - (s3eTimerGetMs() - start));
			if (yield<0)
				break;
			s3eDeviceYield(yield);
		}
	}
	delete g_AirplayLogo;
	Iw2DTerminate();
	return 0;
}