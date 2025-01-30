#include <stdio.h>

int main(){
    int number,n;
    scanf("%d %d",&number,&n);
    int new_num=number~(1<<n);
    printf("%d",new_num);
    return 0;
}
