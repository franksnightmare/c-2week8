#include "exception.h"

int main()
{
    throw Exception{} << "Pi in 4 decimals is " << 3.1415 << '\n';
}
