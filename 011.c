#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,h;
printf("Enter the value : \n");
scanf("%d\n", &a);
printf("Enter the value : \n");
scanf("%d\n", &b);
printf("Enter the value : \n");
scanf("%d\n", &c);
printf("Enter the value : \n");
scanf("%d\n", &d);
printf("Enter the value : \n");
scanf("%d\n", &e);
printf("Enter the value : \n");
scanf("%d\n", &f);
printf("Enter the value : \n");
scanf("%d\n", &g);
printf("Enter the value : \n");
scanf("%d\n", &h);

if ((a>b)||(a>c)||(a>d)||(a>e)||(a>f)||(a>g)||(a>h))

    printf(" %d \n ", a);

else if ((b>c)||(b>d)||(b>e)||(b>f)||(b>g)||(b>h))

    printf(" %d \n ", b);
    
else if ((c>d)||(c>e)||(c>f)||(c>g)||(c>h))

    printf(" %d \n ", c);
    
else if ((d>e)||(d>f)||(d>g)||(d>h))

    printf(" %d \n ", d);
    
else if ((e>f)||(e>g)||(e>h))

    printf(" %d \n ", e);
    
else if ((f>g)||(f>h))

    printf(" %d \n ", f);
    
else if (g>h)

    printf(" %d \n ", g);
    
else

    printf(" %d \n ", h);
    
return 0;

}
