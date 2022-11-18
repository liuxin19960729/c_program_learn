
#include <stdio.h>

#define CHECK(a, b)             \
    ({                          \
        __typeof__(a) _a = (a); \
        __typeof__(b) _b = (b); \
        (&_a == &_b);           \
        _a > _b ? _a : _b;      \
    })
//     (&_a == &_b);   如何类型不同 编译器回警告  可以帮助我们检查        
int main(int argc, char const *argv[])
{
    printf("max:%d\n", CHECK(400, 300));
    printf("zz:%d\n", ({int c=100; int d=200; c>d?d:d; }));
    printf("zz2:%d\n", ({ 20000; }));
    return 0;
}
