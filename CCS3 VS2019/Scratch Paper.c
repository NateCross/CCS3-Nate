#include<stdio.h>
typedef struct
{
int month;
int day;
int year;
} BDAY;
void input(BDAY *b);
void display(BDAY *b);
main()
{
BDAY bday;
input(&bday);
display(&bday);
}
void input(BDAY *b)
{
int m,d,y;
printf("Enter month of birth: ");
scanf("%d",&b->month);
printf("Enter day of birth: ");
scanf("%d",&b->day);
printf("Enter year of birth: ");
scanf("%d",&b->year);
}
void display(BDAY *b)
{
printf("Birthday month: %d",b->month);
printf("\nBirthday day: %d",b->day);
printf("\nBirthday year: %d",b->year);
}
