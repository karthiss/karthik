#include <stdio.h>
 
int main()
{
 
        int array[50], size, i;
 
        printf("\n Enter the size of the array: ");
	scanf("%d", &size);
 
        printf("\n Enter %d elements of  the array: ", size);
 
        for (i = 0; i < size; i++)
		scanf("%d", &array[i]);
 

 
        for (i = 0; i < size; i++) 
        {
            
        printf("\n  given array : %d Address of array : %d ", array[i], i);
        }
        return 0;
 
}
