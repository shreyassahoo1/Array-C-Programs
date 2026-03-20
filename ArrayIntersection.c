// Intersection of elements between two arrays

#include <stdio.h>

void findIntersection(int arr1[], int n1, int arr2[], int n2) 
{
    printf("\nIntersection elements are: ");
    for (int i = 0; i < n1; i++) 
    {
        for (int j = 0; j < n2; j++) 
        {
            if (arr1[i] == arr2[j]) 
            {  
                printf("%d ", arr1[i]);
                break; 
            }
        }
    }
    printf("\n");
}

int main() 
{
    int n1, n2, i;

    printf("\nEnter number of elements for first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter %d elements: ", n1);
    for (i=0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("\n\nEnter number of elements for second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter %d elements: ", n2);
    for (i=0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Calling the function: 
    findIntersection(arr1, n1, arr2, n2);

    return 0;
}
