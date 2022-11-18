#include <stdio.h>



struct llist
{
    int val;
    struct llist *next;
};

#define llist_concat(val, next) \
    (struct llist[]) { val, next }

int main(int argc, char const *argv[])
{
    struct llist *list = llist_concat(1, llist_concat(2, llist_concat(3, NULL)));
    while (!!list)
    {
        printf("%d\n", list->val);
        list = list->next;
    }
    
    return 0;
}
