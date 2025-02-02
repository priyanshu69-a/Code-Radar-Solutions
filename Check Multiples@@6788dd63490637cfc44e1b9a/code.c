#include <stdio.h>
int main() {
    int divisor,num;
    scanf("%d %d",&divisor,&num);
  
    if(num % divisor == 0){
            print("Yes");
        }
    else{
        printf("No");
    }
    return 0;
}