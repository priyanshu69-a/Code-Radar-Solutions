#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=n;i<=n;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}