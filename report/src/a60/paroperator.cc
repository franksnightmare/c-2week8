#include "guard.ih"

void Guard::operator()(void (*func)())
{
	d_mutex.lock();
	func();
	d_mutex.unlock();
}
