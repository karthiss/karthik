#include<stdio.h>
int main()
{
    int a;
    printf("enter the value : ");
    scanf("%d", &a);
    
    if(a%2!=0)
    {
        if(a%3==0||a%5==0||a%7==0||a%9==0)
        printf("Not prime\n");
        else
        printf("Yes prime\n");
    }
}
