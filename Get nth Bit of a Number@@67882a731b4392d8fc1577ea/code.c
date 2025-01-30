#include <stdio.h>

int main(){
    int number,n;
    scanf("%d %d",&number,&n);
    if(number&(1<<n)){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
