
#include<stdio.h>

#define aa(type_t,name) \
    void  __method_##name(type_t a){\
        printf("aa:%d\n",a);\
    }

#define init_fun(t,n) aa(t,n)

init_fun(int,method)

#define call_method(name,argv) \
    __method_##name(argv);

int main(int argc, char const *argv[])
{
    call_method(method,200);
    return 0;
}
