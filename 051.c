#include <stdio.h>
int main() 
{
	int a,digt1,digt2,digt3;
	printf("Enter the value : ");
	scanf("%d", &a);
	digt3 = a%10;
	a = a/10;
	digt2 = a%10;
	a = a/10;
	digt1 = a%10;
	printf("%d %d %d", digt1, digt2, digt3);
	return 0;
}
