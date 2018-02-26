#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("Enter the two degit value A  : ");
    scanf("%d", &a);
    b= a;
    i= a/10;
    j= b%10;
    printf("%d%d\n",j,i);
  return 0;  
}
