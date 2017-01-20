#ifndef GUARD_H
#define GUARD_H

#include "semaphore.h"

class Guard
{
	std::mutex &d_mutex;
	
	public:
		Guard(std::mutex &someMutex);
		Guard(Semaphore &semaphore);
		
		void operator()(void (*func)());
};

#endif
