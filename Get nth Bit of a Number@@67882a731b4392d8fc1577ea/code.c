#include <stdio.h>

int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    k=k>>n;
    if (k&1==1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}