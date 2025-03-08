#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    while (a!=0){
        b++;
        a=a<<1;
    }
    printf("%d",32-b);
    return 0;
}