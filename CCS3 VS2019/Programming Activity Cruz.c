#include<stdio.h>
#include<conio.h>

#define pi 3.1416

float diameter(float r) {
    return r * 2;
}

float area(float r) {
    return pi * r * r;
}

float circumference(float r) {
    return pi * 2 * r;
}

main( )
{
  int choice;
  float radius,a,c,d;
  printf("Enter radius of circle:");
  scanf("%f", &radius);
  printf("Choose an option:");
  printf("\n1. Diameter\n2. Area\n3. Circumference");
  printf("\nEnter choice:");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1: d = diameter(radius);
                 printf("\nThe diameter is %.2f",d);
                 break;
    case 2: a = area(radius);
                 printf("\nThe area is %.2f",a);
                 break;
    case 3: c = circumference(radius);
                 printf("\nThe circumference is %.2f",c);
                 break;
    default: printf("\nInvalid input");
  }
  getch();
}
