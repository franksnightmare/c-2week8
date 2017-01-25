#include "semaphore.ih"

mutex &Semaphore::mutexRef()
{
	return d_mutex;
}
