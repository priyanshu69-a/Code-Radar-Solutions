#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n+1-i;j++){
            printf("* \n");
        }
        printf("\n");
        
    }
    return 0;
}