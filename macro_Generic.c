
#include<stdio.h>

void ffi(int a){
    printf("ff(int aa) %d\n",a);
}
void ffd(double a){
    printf("ff(double aa) %lf:\n",a);
}


#define mar_ff(x) \
    _Generic((x),double:ffd,int:ffi,default:ffd)(x)

int main(int argc, char const *argv[])
{
    mar_ff(100);
    int a=100;
    mar_ff(a); 
    double da=100;
    mar_ff(da);   
    printf("complete\n"); 
    return 0;
}
