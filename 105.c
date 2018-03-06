#include<stdio.h>
int main()
{
char ch;
int a,b,*c;
printf("Enter The Number : ");
scanf("%d",&a);
if(a==1)
{
b=65;
printf("%d", b);
}
else if (a!=1)
b= a+64;
c= &b;
ch= *c;
if(*c<=90)
printf("%c\n", *c);
else 
printf("Invalid\n");
return 0;
}
