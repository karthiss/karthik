#include <stdio.h>
 
int main()
{
 
        int array[50], size, i;
 
        printf("\n Enter the size of the array: ");
	scanf("%d", &size);
 
        printf("\n Enter %d elements of  the array: ", size);
 
        for (i = 0; i < size; i++)
		scanf("%d", &array[i]);
 
 
       i = size / 2;
            
        printf("\n  %d", array[i]);
        
        return 0;
 
}
