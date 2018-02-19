#include<stdio.h>
int main()
{
    int a,i,fact=1;
    printf("enter the value A \n");
    scanf("%d\n", &a);
    for(i=1;i<=a;i++)
    fact = fact*i;
    printf("%d\n", fact);
    return 0;
}
