#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,h;
printf("Enter the value : \n");
scanf("%d",&a);
printf("Enter the value : \n");
scanf("%d",&b);
printf("Enter the value : \n");
scanf("%d",&c);
printf("Enter the value : \n");
scanf("%d",&d);
printf("Enter the value : \n");
scanf("%d",&e);
printf("Enter the value : \n");
scanf("%d",&f);
printf("Enter the value : \n");
scanf("%d",&g);
printf("Enter the value : \n");
scanf("%d", &h);

if ((a>b)&&(a>c)&&(a>d)&&(a>e)&&(a>f)&&(a>g)&&(a>h))

    printf("\nThe biggest value %d \n ", a);

else if ((b>c)&&(b>d)&&(b>e)&&(b>f)&&(b>g)&&(b>h))

    printf("The biggest value %d \n ", b);
    
else if ((c>d)&&(c>e)&&(c>f)&&(c>g)&&(c>h))

    printf("The biggest value %d \n ", c);
    
else if ((d>e)&&(d>f)&&(d>g)&&(d>h))

    printf("The biggest value %d \n ", d);
    
else if ((e>f)&&(e>g)&&(e>h))

    printf("The biggest value %d \n ", e);
    
else if ((f>g)&&(f>h))

    printf("The biggest value %d \n ", f);
    
else if (g>h)

    printf("The biggest value %d \n ", g);
    
else

    printf("The biggest value %d \n ", h);
    
return 0;

}
