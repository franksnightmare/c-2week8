#include <iostream>
#include "addtwo.h"
#include "pointerunion.h"

void add2()
{
    PointerUnion pu = { addTwo };
    std::cout << "Address addTwo2: "<< pu.vp << '\n';
}
