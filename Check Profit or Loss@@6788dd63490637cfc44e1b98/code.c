#include <stdio.h>
int main() {
    float sp,cp;
    scanf("%f %f",&sp,&cp);
    if(sp>cp){
        printf("Profit");
    }
    else if (cp>sp){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}