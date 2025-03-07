#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    for(b=31;b>=0;b--){
        if(a&(1<<b))
         c=1;
        if(c)
        printf("%d",(a&(1<<b))?1:0);    
    }
    if(!c) printf("0");
    return 0;
}