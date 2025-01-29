#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if ((number >> (sizeof(int) * 8 - 1)) & 1) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
