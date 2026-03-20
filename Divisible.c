// To find numbers divisible by both (2,5) and (3,5)

#include <stdio.h>

int main() 
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Numbers divisible by both 2 and 5: ");
    for (i=0; i<=n; i++) {
        if (i%2==0 && i%5==0) {
            printf("%d, ", i);
        }
    }
    printf("\n");

    printf("Numbers divisible by both 3 and 5: ");
    for (i=0; i<=n; i++) {
        if (i%3==0 && i%5==0) {
            printf("%d, ", i);
        }
    }
    printf("\n");
    return 0;
}
