#include <stdio.h>
int main() {
    int divisor,num;
    scanf("%d %d",&divisor,&num);
  
    if(num % divisor == 0){
            printf("Yes");
        }
    else{
        printf("No");
    }
    return 0;
}