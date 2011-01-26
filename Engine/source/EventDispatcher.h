#pragma once
#include "Event.h"

class EventDispatcher
{
public:
	EventDispatcher(void);
	virtual ~EventDispatcher(void);
	void addEventListener(char* type, void* listener, bool useCapture, bool useWeakReference);
	bool dispatchEvent(Event event);
	bool hasEventListener(char* type);
	void removeEventListener(char* type, void* listener, bool useCapture);
};

