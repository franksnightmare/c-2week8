#include <iostream>
#include "addtwo.h"
#include "pointerunion.h"

void add1()
{
    PointerUnion pu = { addTwo };
    std::cout << "Address addTwo1: "<< pu.vp << '\n';
}
