#include <stdio.h>

int main(){
    int number,n;
    scanf("%d",&n);
    scanf("%d",&k);
    if (n < 0 || n >= sizeof(int) * 8) {
        return 1;
    }
    int mask = 1 << n;
    if (number & mask) {
        printf("The %dth bit of %d is: 1\n", n, number);
    else{
        printf("0");
    }
    return 0;
}