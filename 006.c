#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the A value : ");
    scanf("%d", &a);
    printf("\nenter the B value : ");
    scanf("%d", &b);
    printf("\nenter the C value : ");
    scanf("%d", &c);
    
if ((a>b)&&(a>c))
    
        printf("The bigger value is %d", a);
        
else if(b>c)

        printf("The bigger value is %d", b);

else

        printf("\nThe bigger value is %d", c);
    
    getch ();
}
