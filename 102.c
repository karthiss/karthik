#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value : ");
    scanf("%d",&a);
    printf("enter the value : ");
    scanf("%d",&b);
    if(a%2==0)
    {
        printf("%d\n", a/2);
    }
        else
        printf("%d\n", a);
    
        if(b%2==0)
    {
        printf("%d\n", b/2);
    }
        else
        printf("%d\n",b);
    
    return 0;
}
