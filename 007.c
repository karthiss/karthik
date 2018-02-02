#include<stdio.h>
int main()
{
    int a;
    printf("enter a year\n");
    scanf("%d\n", &a);
if(a%4 == 0)

        printf("this year is leap year\n");
    
    else
        printf("this year is not leap year\n");

return 0;
}
