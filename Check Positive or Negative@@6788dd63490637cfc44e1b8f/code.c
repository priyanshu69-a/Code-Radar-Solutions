#include <stdio.h>
int main() {
    int num1;
    scanf("%d ",&num1);
    if(num1>0){
            printf("Positive");
        }
    if(num1<0){
        printf("Negative");
    }
    else(num1==0){
        printf("Zero");
    }
    
    return 0;
}