#include <stdio.h>
int main() 
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	while(num%2!=0)
	{
		num=num-1;
	}
	printf("\n%d",num);
	return 0;
}
