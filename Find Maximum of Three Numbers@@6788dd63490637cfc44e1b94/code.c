#include <stdio.h>
int main() {
    float num1,num2,num3;
    scanf("%f %f %f ",&num1,&num2,&num3);
    if(num1>num2&&num3){
        print("%f",num1);
    }
    else if(num2>num1&&num3){
        print("%f",num2);
    }
    else if(num3>num2&&num1){
        print("%f",num3);
    }
    return 0;
}