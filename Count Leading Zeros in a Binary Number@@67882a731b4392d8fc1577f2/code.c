#include <stdio.h>

int main(){
    int number;
    scanf("%d ",&number);
    int count=0;
    while((number&1)==0){
        number=number>>31;
        count++;
    }
    printf("%d",count);
    return 0;
}
