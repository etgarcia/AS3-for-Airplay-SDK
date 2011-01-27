#pragma once
#include "Event.h"
#include "Iw2D.h"
#include <vector>

typedef void (*fptr)(Event*);

class EventDispatcher
{
public:
	EventDispatcher(void);
	virtual ~EventDispatcher(void);
	static EventDispatcher* stage;
	void addEventListener(char* type, fptr listener, bool useCapture = false, bool useWeakReference = false);
	bool dispatchEvent(Event* evnt);
	bool hasEventListener(char* type);
	void removeEventListener(char* type, fptr listener, bool useCapture = false);
	void recieveEvent(Event* evnt);
	char* name;
protected:
	std::vector<Event*> events;
	std::vector<fptr> listeners;
};

