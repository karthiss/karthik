#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Initial Value \n");
    scanf("%d\n", &a);
    printf("Enter the Final Value \n");
    scanf("%d\n", &b);
    
    for(c=a+1;c<b;c++)
    {
        if(c%2 ==0)
        printf(" %d",c);
    }
    return 0;
}
