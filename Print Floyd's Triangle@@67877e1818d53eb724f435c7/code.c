#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
        
    }
    return 0;
}
