#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            printf("*");
        }
        printf("\n")
        
    }
    return 0;
}