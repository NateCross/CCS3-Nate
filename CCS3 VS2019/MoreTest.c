#include<stdio.h>

typedef struct PTR
{
    int num;
    struct PTR *p;
}rec;

main()
{
    rec a,b,c;
    a.num = 5;
    b.num = 20;
    c.num = 17;
    a.p = &c;
    b.p = &a;
    c.p = &b;
    printf("%d",a.p->num);
    printf("\n%d",a.p->p->num);
}
