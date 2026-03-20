// delete an element from an array by giving its value

#include <stdio.h>
int main() 
{
    int arr[100], n, i, pos = -1, del;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to delete: ");
    scanf("%d", &del);

    for(i = 0; i<n; i++) 
    {
        if(arr[i] == del) {
            pos = i;
            break;
        }
    }
    if(pos == -1)
        printf("Element is not found in the array!\n");
    else {
        for(i = pos; i<n-1; i++)
            arr[i] = arr[i + 1];
        n--; 
        printf("New array is:\n");
        for(i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
