#pragma once
#include "EventDispatcher.h"

class Timer :
	public EventDispatcher
{
public:
	Timer(int32 delay, int32 repeatCount = 0);
	~Timer(void);
	static int64 realTime;
	int32 delay;
	int32 repeatCount;

	void reset();
	void start();
	void stop();
	void update();
private:
	int64 startTime;
	int32 count;
	bool isRunning;
};