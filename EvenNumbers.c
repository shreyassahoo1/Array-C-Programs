// Print even numbers upto a given value "n" 

#include <stdio.h>
int main() 
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nEven numbers till %d are:\n ", n);
    for (i=0; i<=n; i+=2) { 
        printf("%d ", i);
    }

    printf("\n"); 
    return 0;
}
