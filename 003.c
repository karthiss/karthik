#include<stdio.h>
int main()
{
    int a,b;
    b = 2;
    printf("Enter the number\n");
    scanf("%d\n", &a);
    if(a % b ==0)
    printf("Even\n");
    else
    printf("Odd\n");
    return 0;
}
