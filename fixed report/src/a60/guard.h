#ifndef GUARD_H
#define GUARD_H

#include "semaphore.h"

class Guard
{
	std::mutex &d_mutex;
	
	public:
		Guard(std::mutex &someMutex);
		Guard(Semaphore &semaphore);
		
		template <typename T>
		void operator()(T func)
		{
			d_mutex.lock();
			func();
			d_mutex.unlock();
		}
};

#endif
