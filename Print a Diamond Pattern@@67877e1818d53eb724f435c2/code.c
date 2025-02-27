#include <stdio.h>
int main() {
    int space,i,j,size;
    scanf("%d",&size);
    for (i = 1; i <= size; i++) {
        for (space = 1; space <= size - i; space++) {
            printf("  ");  // Print spaces
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (i = size - 1; i >= 1; i--) {
        for (space = 1; space <= size - i; space++) {
            printf("  ");  // Print spaces
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}