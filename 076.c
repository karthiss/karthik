#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value A  : ");
    scanf("%d", &a);
    if(a%2!=0)
    {
        if(a%3==0||a%5==0||a%7==0||a%9==0)
        printf("Yes\n");
        else
        printf("No\n");
    }
    if(a%2==0)
    {
        printf("Invalid Number\n");
    }
    return 0;
}
