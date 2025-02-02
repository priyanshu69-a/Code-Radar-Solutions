#include <stdio.h>
int main() {
    float num1,num2,num3,max;
    scanf("%f %f %f ",&num1,&num2,&num3);
    if(num1>=num2&&num1>=num3){
        max=num1;
    }
    else if(num2>=num1&&num2>=num3){
        max=num2;
    }
    else {
        max=num3;
    }
    print("%f",max);
    return 0;
}