#include<stdio.h>
int main(){
    int i,j,a;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        char b='A';
        for(j=a-i;j>0;j--){
            printf("%c ",b);
            b++;
        }
        printf("\n");
    }
    return 0;
}
