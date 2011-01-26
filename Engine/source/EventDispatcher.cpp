#include "EventDispatcher.h"


EventDispatcher::EventDispatcher(void)
{
}


EventDispatcher::~EventDispatcher(void)
{
}

void EventDispatcher::addEventListener(char* type, void* listener, bool useCapture = false, bool useWeakReference = false)
{
}

bool EventDispatcher::dispatchEvent(Event event)
{
	return true;
}

bool EventDispatcher::hasEventListener(char* type)
{
	return true;
}

void EventDispatcher::removeEventListener(char* type, void* listener, bool useCapture = false)
{
}