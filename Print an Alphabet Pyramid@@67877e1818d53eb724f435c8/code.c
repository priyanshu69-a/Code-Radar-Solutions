#include <stdio.h>
int main() {
    int n,i
    char j;
    scanf("%d",&n);
    for( i=1;i<=n;i++){
        for( j=1;j<=n-i;j++){
            printf(" ");}
        
        for( j=1;j<=i;j++){
            printf("%c ",j);
        }
        
        printf("\n");
        
    }
    
    return 0;
}