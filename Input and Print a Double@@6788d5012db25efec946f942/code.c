#include <stdio.h>
int main() {
    double num;
    printf("A single double-precision floating-point number. ");
    scanf("%lf", &num);
    printf("You entered: %.10lf\n", num);
    return 0;
}