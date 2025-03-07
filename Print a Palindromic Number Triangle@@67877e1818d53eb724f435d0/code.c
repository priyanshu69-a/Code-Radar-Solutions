#include<stdio.h>
int main(){
    int i,j,a,b;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=a-1;j>i;j--){
            printf(" ");
        }
        for(b=1;b<=i;b++){
            printf("%d",b);
        }
        for(;b>=1;b--){
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}