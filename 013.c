#include<stdio.h>
#include<math.h>
int main()
{
    int i,b,c;
    printf("Enter the variable A\n");
    scanf("%d\n", &i);
    printf("Enter the Power Value B");
    scanf("%d\n", &b);
    c= pow(i,b) ;
    printf("The Value is %d \n", c);
    return 1;
}
