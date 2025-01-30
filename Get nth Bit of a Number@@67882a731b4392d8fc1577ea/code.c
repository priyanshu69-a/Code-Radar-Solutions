#include <stdio.h>

int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int x =k>>n;
    if (x&1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}