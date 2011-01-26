#pragma once

class Event
{
public:
	Event(char* type);
	~Event(void);
	char* type;
};