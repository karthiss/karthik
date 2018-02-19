#include<stdio.h>
int main()
{
    int a,i;
    printf("enter the value A \n");
    scanf("%d\n", &a);
    for(i=1;i<=a;i++)
    printf("%d\n", i*a);
    return 0;
}
