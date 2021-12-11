    #include<stdio.h>
    #include <stdlib.h>

    int main()
    {
    int arr[5], tot=5, elem,found=0;
    printf("Enter 5 Array Elements: ");
    for(int i=0; i<tot; i++) // taking array as input

     scanf("%d",&arr[i]);

    printf("\nEnter Element to Delete: ");
    scanf("%d",&elem); // taking input for number to be deleted

    for(int i=0; i<tot; i++)
    {
        if(arr[i]==elem)
        {
            for(int j=i; j<(tot-1); j++)    
                arr[j] = arr[j+1];
            found++;
            i--;
            tot--;
        }
    }
    if(found==0) // to check presence of give number in array
       printf("\nElement doesn't found in the Array!");
    else
        printf("\nElement Deleted Successfully!");
        printf("\n");


    for(int i=0; i<tot; i++)
    {
      printf("%d\t",arr[i]);
    }
    return 0;
}