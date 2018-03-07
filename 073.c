#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Minimum Value : ");
    scanf("%d", &a);
    printf("Enter the Maximum Value : ");
    scanf("%d", &b);
    printf("Enter the Value To find : ");
    scanf("%d", &c);
    if(a>c)
    {
    printf("\tNo");
    }
else if(c>b)
    {
    printf("\tNo");
    }
else
    printf("\tYes");
    return 0;
}
