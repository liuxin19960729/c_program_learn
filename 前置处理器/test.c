// #define SS
// #ifdef SS
// #error ss;
// #endif

#define DOUBLE(x) ({ \
    __typeof__(x) _d_x=(x);\
   _d_x+_d_x; \
})
#define DOUBLE_BLOCK(x) \
    (^(__typeof__(x) __a_in__double_block)  \
    { return __a_in__double_block+__a_in__double_block; }(x))

int z(){
    return 3000;
}
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=100;
    printf("%d\n",DOUBLE_BLOCK(z()));    
    return 0;
}
