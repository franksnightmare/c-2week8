#include "guard.ih"

Guard::Guard(Semaphore &semaphore)
:
	d_mutex(semaphore.mutexRef())
{
}
