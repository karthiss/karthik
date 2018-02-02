#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the A value\n");
    scanf("%d\n", &a);
    printf("enter the B value\n");
    scanf("%d\n", &b);
    printf("enter the C value\n");
    scanf("%d\n", &c);
    
if ((a>b)||(a>c))
    
        printf("The bigger value is %d \n", a);
        
else if(b>c)

        printf("The bigger value is %d \n", b);

else

        printf("The bigger value is %d \n", c);
    
    return 0;
}
