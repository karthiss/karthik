#include<stdio.h>
int main()
{
    int a;
    printf("Enter a year :");
    scanf("%d", &a);
if(a%4 == 0)
        printf("\nYes %d is leap year",a); 
    else
        printf("\nNo %d is not a leap year", a);
return 0;
}
