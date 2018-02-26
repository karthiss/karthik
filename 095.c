#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter principal amount : ");
scanf("%d",&a);
printf("Enter time in hours : ");
scanf("%d",&b);
printf("Enter Rate : ");
scanf("%d",&c);
d = b*c;
printf("The Floor Value %d\n", d);
return 0;
}
