#include "add.h"

#ifdef TESTMETHOD
int tm_add(int a, int b){
        return a + b + a;
}
#endif

int add(int a, int b){
    return a + b;
}
