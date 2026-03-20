// Check if an array is sorted or not.

#include <stdio.h>
int isSorted(int arr[], int size) 
{
    for(int i = 0; i < size - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            return 0; 
        }
    }
    return 1; 
}
int main() 
{
    int arr[100], n;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(isSorted(arr, n)) {
        printf("The array is sorted.\n");
    } else {
        printf("The array is not sorted.\n");
    }
    return 0;
}
