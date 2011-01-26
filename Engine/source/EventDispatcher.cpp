#include "EventDispatcher.h"

void* EventDispatcher::stage;

EventDispatcher::EventDispatcher(void)
{
}

EventDispatcher::~EventDispatcher(void)
{
}

void EventDispatcher::addEventListener(char* type, void (*listener)(Event), bool useCapture, bool useWeakReference)
{
	events.push_back(new Event(type));
	listeners.push_back(listener);
}

bool EventDispatcher::dispatchEvent(Event* evnt)
{
	return true;
}

bool EventDispatcher::hasEventListener(char* type)
{
	return true;
}

void EventDispatcher::removeEventListener(char* type, void (*listener)(Event), bool useCapture)
{
}

void EventDispatcher::recieveEvent(Event* evnt)
{
	for (unsigned int i = 0; i < events.size(); i++)
	{
		if (events[i]->type == evnt->type)
		{
		}
	}
}