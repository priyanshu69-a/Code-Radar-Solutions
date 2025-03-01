#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);


    for (int i = size; i >= 1; i--) {  
        for (int j = 1; j <= i; j++) { 
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}