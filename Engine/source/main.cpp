#include "Engine.h"
#include "Timer.h"

void renderStage(Stage* stage/*should put event in here when implemented*/)
{
	stage->render();
}

int main()
{
	Iw2DInit();
	// Setup the stage, create a sprite object, and a bitmap object
	Stage* stage = new Engine();
	Timer* timer = new Timer(1000/30);
	void (*pRenderStage)(Stage*) = &renderStage;
	stage->addEventListener("timer", renderStage);

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