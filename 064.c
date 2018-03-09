#include<stdio.h>
int main()
{
    int a,b,c;\
    printf("Enter the First Value : ");
    scanf("%d",&a);
    printf("Enter the Second Value : ");
    scanf("%d",&b);
    c = a+b;
    if (c%2==0)
    {
        printf("\tEven");
    }
    else 
    printf("\tOdd");
    return 0;
}
