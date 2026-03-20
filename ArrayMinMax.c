// Finding largest and smallest number in an array

#include <stdio.h>

int main() 
{
    int n, i;
    
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i=0; i < n; i++) {
        printf("Enter element number %d\n", i+1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(i=1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Results: \n");
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}
