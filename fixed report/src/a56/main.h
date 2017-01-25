#ifndef MAIN_H
#define MAIN_H

template <typename T>
T as(auto const castVar)
{
	return static_cast<T>(castVar);
}

template <typename T>
T as(auto const &&castVar)
{
	return static_cast<T>(castVar);
}

#endif
