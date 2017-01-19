#include "main.ih"

int main(int argc, char **argv)
{
	mutex someMutex;
	Semaphore someSemaphore;
	
	Guard guard1(someMutex);
	Guard guard2(someSemaphore);
	
	guard1(test);
	guard2(test);
}
