#include <stdio.h>
#include <stdlib.h>

void f(int *x)
{
    int j=7;
    *x=j;

    printf("%d-",*x);

}

int main()
{
    int i=66 ;
    int *x;
    printf("%d\n", x);
    x=&i;
    printf("%d\n", x);
    printf("%d\n", &i);
    f(x);
    printf("%d",*x);

    return 0;

}
