#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("enter the value A \n");
    scanf("%d", &a);
    if(a!=1)
    {
    if((a==2)||(a==3)||(a==5)||(a==7)||(a==9))
    {
        printf("Yes Prime");
    }
    else if(a%2==0||a%3==0||a%5==0||a%7==0||a%9==0)
       {
        printf("Not prime\n");
       }
       else
        {
        printf("Yes prime\n");
    }
    }
    else
    {
        printf("Composite Number");
    }
   return 0; 
}
