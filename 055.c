#include <stdio.h>
int main() 
{
	int a,b,c;
	printf("enter the First number  :");
	scanf("%d",&a);
	printf("enter the Second number :");
	scanf("%d",&b);
    c = a*b;
    if(c%2==0)
    {
        printf("Even");
    }
    else
        printf("Odd");
	return 0;
}
