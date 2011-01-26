#pragma once

class Event
{
public:
	Event(char* type);
	~Event(void);
	char* type;
	void* stage; //need to change to target
};