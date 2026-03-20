// Search an element linearly in an array

#include <stdio.h>

int main() 
{
    int n, i, key, found=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i=0; i < n; i++) {
        printf("Enter element number %d\n", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("\nElement found at index: %d (Position %d)\n", i, i+1);
            found = 1;
            break; 
        }
    }

    if(found==0) 
    {
        printf("This element is not in the array.\n");
    }

    return 0;
}
