#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter the first value :");
    scanf("%d", &a);
    printf("Enter the Second Value :");
    scanf("%d", &b);
    printf("Enter the Third value :");
    scanf("%d", &c);
    printf("Enter the Forth Value :");
    scanf("%d", &d);
    e = a/b;
    f = c%d;
   

    printf("%d\n", e);

    printf("%d\n", f);

return 0;
}
