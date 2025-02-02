#include <stdio.h>
int main() {
    int num,divisor;
    scanf("%d %d",&num,&divisor);
  
    if(num > divisor){
            printf("First");
    }
    else if(num < divisor){
        printf("Second");
    }
    else{
        printf("Equal");
    }
 
    
    return 0;
}