#pragma once
#include "Event.h"
#include "Iw2D.h"
#include <vector>

class EventDispatcher
{
public:
	EventDispatcher(void);
	virtual ~EventDispatcher(void);
	static void* stage;
	void addEventListener(char* type, void* listener, bool useCapture = false, bool useWeakReference = false);
	bool dispatchEvent(Event* evnt);
	bool hasEventListener(char* type);
	void removeEventListener(char* type, void* listener, bool useCapture = false);
	void recieveEvent(Event* evnt);
private:
	std::vector<Event*> events;
	std::vector<void*> listeners;
};

