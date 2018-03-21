#include <stdio.h>
 
int main()
{
  int a,b;
  printf("\n Enter the swap number :");
	scanf("%d%d", &a,&b);
	printf("\nBefore swap 1st num : %d", a);
	printf("\nBefore swap 2nd num : %d", b);
	a^=b;
	b^=a;
	a^=b;
	printf("\nAfter swap 1st num : %d ", a);
	printf("\nAfter swap 2nd num : %d ", b);
	return 0;
}
