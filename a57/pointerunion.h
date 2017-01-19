#ifndef POINTERUNION_H
#define POITNERUNION_H

union PointerUnion
{
    int (*fp)(int const &, int const &);
    void *vp;
};

#endif
