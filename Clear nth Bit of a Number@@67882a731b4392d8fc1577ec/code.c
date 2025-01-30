#inclu#include <stdio.h>

int main(){
    int number,n;
    scanf("%d",&number);
    scanf("%d",&n);
    if (n < 0 || n >= sizeof(int) * 8) {
        return 1;
    }
    if (number & 0) {
        printf("%d",n);
        }
    else{
        printf("0");
    }
    return 0;
}
