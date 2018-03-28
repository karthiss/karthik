#include<stdio.h>
#include<math.h>
int main()
{
    int array[5],a,i,j;
    printf("Enter the 5 Numner of element\n");
    for(i=0;i<5;i++)
    {
    printf("Enter The Value : ");
    scanf("%d", &array[i]);
    }
    j = array[0]+array[1]+array[2]+array[3]+array[4];
    printf("Average Of an array is : %d",j/5);
}
