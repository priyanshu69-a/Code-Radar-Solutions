#include <stdio.h>
int main() {
    int grades;
    scanf("%d",&grades);
    switch(grades){
        case "A":
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Average");
            break;
        case 'D':
            printf("Below Average");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Invalid grade");
    }

    return 0;
}