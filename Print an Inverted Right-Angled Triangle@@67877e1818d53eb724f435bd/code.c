#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=a;j++){
            printf("* ");
        }
        a--;
        printf("\n");
        
    }
    return 0;
}