#include <stdio.h>

int main() {
    double num; // Declare a variable to store the double value

    // Prompt the user for input
    printf("Enter a double value: ");

    // Read the double value
    scanf("%lf", &num); // %lf is used to read a double value

    // Print the entered double value
    printf("You entered: %lf\n", num);

    return 0;
}