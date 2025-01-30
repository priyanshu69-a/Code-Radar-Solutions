#include <stdio.h>

int main(){
    int number;
    scanf("%d ",&number);
    int count;
    while(number&1==0){
        number=number>>1;
        count++;
    }
    printf("&d",count);
    return 0;
}
