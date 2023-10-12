#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p=(int *)malloc(sizeof(int));
    *p=5;
    printf("Before freeing=%p\n",p);
    printf("Value of p=%d\n",*p);
    //making it dangling pointer
    free(p);
    // p = 0;
    printf("After freeing =%p\n",p);
    printf("Value of p=%d\n",*p);
    return 0;
}