#include<stdio.h>
int main()
{
    int a;
    printf("enter the value A \n");
    scanf("%d\n", &a);
    
    if(a%2!=0)
    {
        if(a%3==0||a%5==0||a%7==0||a%9==0)
        printf("not prime\n");
        else
        printf("Yes prime\n");
    }
}
