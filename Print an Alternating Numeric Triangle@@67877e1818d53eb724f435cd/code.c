#include<stdio.h>
int main(){
    int i,j,k,a;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<i+1;j++){
            if(i%2==0){
                if(j%2!=0) printf("0 ");
                else printf("1 ");
            }
            if(i%2!=0){
                if(j%2==0) printf("0 ");
                else printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}