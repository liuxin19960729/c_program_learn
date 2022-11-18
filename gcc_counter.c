#include <stdio.h>

int a = __COUNTER__;
int b = __COUNTER__;
int c = __COUNTER__;
#define str(a) cc##a
int main(int argc, char const *argv[])
{
    printf("__COUNTER__=%d\n", __COUNTER__);
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    int g=__COUNTER__;
    return 0;
}
