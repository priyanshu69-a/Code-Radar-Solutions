#include <stdio.h>
int main() {
    int divisor,num;
    scanf("%d %d",&divisor,&num);
    if(divisor==0){
        if(num%divisor==0){
            print("Yes");
        }
    }
    else{
        printf("No");
    }
    return 0;
}