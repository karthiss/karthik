#include<stdio.h>
int main()
{
char ch;
int i,b,*c;
printf("Enter The Number : ");
scanf("%d",&i);
if(i==1)
{
b=65;
printf("%d", b);
}
else if (i!=1)
b= i+64;
c= &b;
ch= *c;
if(*c<=90)
printf("%c\n", *c);
else 
printf("Invalid\n");
return 0;
}
