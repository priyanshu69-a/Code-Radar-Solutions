#include<stdio.h>
#include<math.h>

int main(){
    int number,n;
    scanf("%d",&number);
    scanf("%d",&n);
    if (n < 0 || n >= sizeof(int) * 8) {
        return 1;
    }
 int power = (int)pow(2, n);

    if ((number & power) != 0) {
        number = number - power;
    }

    printf("%d",  number);

    return 0;
}
