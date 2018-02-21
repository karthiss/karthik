#include<stdio.h>
void main()
{
int a,b=0,c,d;

printf("enter the number");
scanf("%d",&a);
c=a;
while(a>0)
{
d=a%10;
b=b*10+d;
a=a/10;
printf("%d\n",b);
}
if(b==c)
{
    printf("\npalindrome");
}
else
{
    printf("not a palindrome");
}
}
