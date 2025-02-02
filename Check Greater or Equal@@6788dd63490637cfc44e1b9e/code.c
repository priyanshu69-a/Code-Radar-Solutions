#include <stdio.h>
int main() {
    int num,divisor;
    scanf("%d %d",&num,&divisor);
  
    if(num > divisor){
            printf("Yes");
    }
    else if(num < divisor){
        printf("No");
    }
 
    
    return 0;
}