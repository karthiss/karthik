#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter firts value : ");
scanf("%d",&a);
printf("Enter second value : ");
scanf("%d",&b);
printf("Enter Third value : ");
scanf("%d",&c);
d = (a*b)%c;
printf("%d", d);
return 0;
}
