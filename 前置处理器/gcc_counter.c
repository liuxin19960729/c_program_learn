#include <stdio.h>

// int a = __COUNTER__;
// int b = __COUNTER__;
// int c = __COUNTER__;
// #define str(a) cc##a

// #define ___PASTE(a,b) a##b
// #define __PASTE(a,b) ___PASTE(a,b)

// #define __ID(prefix) \
//     __PASTE(prefix,__COUNTER__)

#define __abab(a,b) a##b
#define _ab(a,b) __abab(a,b)
#define _id(prefix) \
    _ab(prefix,__COUNTER__)

int main(int argc, char const *argv[])
{
    // printf("__COUNTER__=%d\n", __COUNTER__);
    // printf("a=%d, b=%d, c=%d\n", a, b, c);
    // __ID(300);
    // __ID(300);
    _id(20);
    return 0;
}
