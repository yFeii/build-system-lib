#include "mathLib.h"

int caculate(int a, int b){
#ifdef TESTMETHOD
    return sub(tm_add(a,b),b);
#endif
    return sub(add(a,b),b);
}

