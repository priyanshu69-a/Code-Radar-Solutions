#include <stdio.h>
int main() {
    int n;
    char c;
    scanf("%d %c",&n,&c);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c",c);
            c++;
        }
        printf("\n");
        
    }
    return 0;
}
