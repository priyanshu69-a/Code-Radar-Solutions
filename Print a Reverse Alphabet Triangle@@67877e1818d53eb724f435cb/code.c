#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    for (int i = size; i >= 1; i--) {  
        char c;
        for (int j = 1; j <= i; j++) { 
            printf("%c ",c);
        }
        printf("\n");
    }

    return 0;
}