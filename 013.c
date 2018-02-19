#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the variable A\n");
    scanf("%d\n", &a);
    printf("Enter the Power Value B");
    scanf("%d\n", &b);
    c= pow(a,b) ;
    printf("The Value is %d \n", c);
    return 1;
}
