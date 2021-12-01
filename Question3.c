//WAP to Insert an array elements at specific location.

#include<stdio.h>
#include<stdlib.h>

int main() {

    int arr[20], n, i, num, loc;

    printf("Enter size of an array:");
    scanf("%d", &n);

    printf("\nEnter array elements:");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element for insert:");
    scanf("%d",&num);
    printf("\nEnter location:");
    scanf("%d",&loc);

    for (i = n; i >= loc; i--) {
        arr[i] = arr[i - 1];
    }
    n++;
    arr[loc - 1] = num;

    printf("\nArray list after insertion:");
    for (i = 0; i < n; i++) {
        printf("%d",arr[i]);
        
            }

    return 0;
}