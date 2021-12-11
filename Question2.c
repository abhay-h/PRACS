//Create a 2D array and accept value from user and print the array elements 

#include <stdio.h>
#include <stdlib.h>
int main()
{
        int arr[15][15], rows, cols;
        printf("\n Enter Rows for Array : ");
        scanf("%d", &rows);
        printf("\n Enter Columns for Array: ");
        scanf("%d", &cols);
       printf("\n****Enter Row ** and Columns for Array****:  ");

        for(int i=0; i<rows; i++)
        {
                for(int j=0; j<cols; j++)
                {
                   printf("\nelements : [%d][%d]: ",i,j);
                       scanf("%d",&arr[i][j]);
                }
        }

       printf("\nTwo Dimensional Array is : ");
        
        for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("%d ",arr[i][j]);
		
		}
	}
        return 0;
} 

 