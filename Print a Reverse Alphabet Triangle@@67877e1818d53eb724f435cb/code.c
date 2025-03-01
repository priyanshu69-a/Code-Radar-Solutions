#include <stdio.h>
int main() {
    int n;
    
    scanf("%d ",&n);
    char a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            printf("%c ",a);
        }
        a--;
        printf("\n");
        
    }
    return 0;
}