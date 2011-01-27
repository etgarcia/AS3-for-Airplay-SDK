#include "EventDispatcher.h"
#include "DisplayObjectContainer.h"

EventDispatcher* EventDispatcher::stage;

void runListener(Event* evnt, fptr listener)
{
	return listener(evnt);
}

EventDispatcher::EventDispatcher(void)
{
}

EventDispatcher::~EventDispatcher(void)
{
	events.clear();
	for (std::vector<fptr>::iterator i = listeners.begin(); i != listeners.end(); ++i)
		*i = NULL;
}

void EventDispatcher::addEventListener(char* type, fptr listener , bool useCapture, bool useWeakReference)
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

void EventDispatcher::removeEventListener(char* type, fptr, bool useCapture)
{
}

void EventDispatcher::recieveEvent(Event* evnt)
{
	// If event type matches a listener, run listener function
	for (unsigned int i = 0; i < events.size(); i++)
		if (events[i]->type == evnt->type)
			runListener(evnt, listeners[i]);

	// If this is a display object container, pass event onto children
	DisplayObjectContainer* doc = dynamic_cast<DisplayObjectContainer*>(this);
	if (doc)
		doc->passOnEvent(evnt);
	doc = NULL;
}