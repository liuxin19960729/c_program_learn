

#define build(c)          \
    struct _build_cs      \
    {                     \
        int : (-(!!(c))); \
    }

// c =0  -!!c 0  or  c=1  -!!c=-1 编译器回报错 bit 位数不允许为负数
build(0);

struct bit_mar
{
    int a : 1;
    int b : 1;
    int : 0;// 当 bit 位数为 0不允许写名字 
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
