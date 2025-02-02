#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if (n <= 1) {
        printf("Not Prime");
    }
    else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("Prime");
        } 
        else {
            printf("Not Prime");
        }
    }

    return 0;
}