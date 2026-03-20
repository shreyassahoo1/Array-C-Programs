// reversing an array
#include <stdio.h>

void revArray(int arr[], int size) 
{
    int start = 0, end = size - 1;
    while (start < end) 
    {
        arr[start] = arr[start] + arr[end];
        arr[end] = arr[start] - arr[end];
        arr[start] = arr[start] - arr[end];

        start++;
        end--;
    }
}
int main() 
{
    int arr[100], n, i;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i<n; i++)
        scanf("%d", &arr[i]);

    revArray(arr, n);

    printf("Reversed array is:\n");
    for (i = 0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}
