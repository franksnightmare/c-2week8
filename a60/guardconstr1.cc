#include "guard.ih"

Guard::Guard(mutex &someMutex)
:
	d_mutex(someMutex)
{
}
