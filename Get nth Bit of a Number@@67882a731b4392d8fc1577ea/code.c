#include <stdio.h>

int main(){
    int number,n;
    scanf("%d",&number);
    scanf("%d",&n);
    if (n < 0 || n >= sizeof(int) * 8) {
        return 1;
    }
    int mask = 1 << n;
    if (number & mask) {
        printf("%d", number);
        }
    else{
        printf("0");
    }
    return 0;
}
