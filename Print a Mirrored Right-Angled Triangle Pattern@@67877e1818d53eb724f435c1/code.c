// Your code here...
#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int a =size;

    for (int i = 1; i <= size; i++) {  
        for (int j = 1; j <= a; j++) { 
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
