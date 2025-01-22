#include <stdio.h>
int main() {
    char name[100],Hobby[100];
    int Age;
    scanf("%99s", name);
    scanf("%d", &Age);
    scanf("%99s", Hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",Age);
    printf("Hobby: %s\n",Hobby);
    
    return 0;
}