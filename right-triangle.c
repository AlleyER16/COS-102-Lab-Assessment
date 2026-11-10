#include <stdio.h>
#include <stdlib.h>

int main() {
    float first_angle;
    float second_angle;
    float third_angle;

    printf("Welcome to the program to determine if a triangle is a right angled triangle\n");

    // Taking in first angle
    printf("Enter first angle and press ENTER: ");
    scanf("%f", &first_angle);

    // Checking first angle
    if(first_angle >= 180) {
        printf("One angle of a triangle cannot be greater than or equal to 180\n");
        exit(1); // exit the program with exit code 1 - meaning it didn't run smoothly but was ended
    }

    // Taking in second angle
    printf("Enter second angle and press ENTER: ");
    scanf("%f", &second_angle);

    // Checking sum of first and second angle
    if((first_angle + second_angle) >= 180) {
        printf("The sum of 2 angles of a triangle cannot be greater than or equal to 180\n");
        exit(1);
    }

    // Computing third angle
    third_angle = 180.0 - (first_angle + second_angle);

    // Checking all angles to determine if it's a right angled triangle
    if(first_angle == 90 || second_angle == 90 || third_angle == 90) {
        printf("The triangle is a right angled triangle\n");
    }else {
        printf("The triangle is not a right angled triangle\n");
    }

    return 0;
}