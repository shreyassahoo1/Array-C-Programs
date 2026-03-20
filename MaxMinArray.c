// difference between max and min value in an array

#include <stdio.h>
int main() 
{
    int n, i, max, min, diff;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];

    for(i = 1; i<n; i++) 
    {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    diff= max - min;
    printf("Maximum value is: %d\n", max);
    printf("Minimum value is: %d\n", min);
    printf("Difference between max and min value is: %d\n", diff);
    return 0;
}
