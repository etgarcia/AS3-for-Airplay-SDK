#include "Timer.h"

Timer::Timer(int32 delay, int32 repeatCount)
{
	realTime = s3eTimerGetMs();
}

Timer::~Timer(void)
{
	EventDispatcher::~EventDispatcher();
}

int64 Timer::realTime;

void Timer::reset()
{
	stop();
	count = 0;
}

void Timer::start()
{
	startTime = s3eTimerGetMs();
	isRunning = true;
}

void Timer::stop()
{
	isRunning = false;
}

void Timer::update()
{
	realTime = s3eTimerGetMs();
	if (isRunning)
	{
		int32 diff = int32(realTime - startTime);
		if (diff > delay)
		{
			count++;
			startTime = startTime + delay;
			if (startTime < 0) startTime = 0;
			Event* evnt = new Event("timer");
			stage->recieveEvent(evnt);
			delete evnt;
		}
		else if (diff < 0)
		{
			startTime = realTime = 0;
		}
		if (count >= repeatCount && repeatCount != 0)
				isRunning = false;
	}
}