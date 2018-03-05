#include<stdio.h>
int main()
{
    int i,digt1,digt2,digt3,digt4;
    printf("enter the value : ");
    scanf("%d",&i);
    digt4= i%10;
    i= i/10;
    digt3= i%10;
    i= i/10;
    digt2= i%10;
    i= i/10;
    digt1= i%10;
    if(digt1%2==0)
    {
        printf("%d",digt1);
    }
    if(digt2%2==0)
    {
        printf("%d",digt2);
    }
    if(digt3%2==0)
    {
        printf("%d",digt3);
    }
    if(digt4%2==0)
    {
        printf("%d",digt4);
    }
    return 0;
}
