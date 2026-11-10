#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Welcome to the program to determine if a triangle is a right angled triangle\n");

    // Taking in first angle
    printf("Enter first angle and press ENTER: ");
    
    float first_angle = 0.0;
    if(scanf("%f", &first_angle) != 1) {
        printf("Enter a valid number\n");
        exit(1);
    }

    // Checking first angle
    if(first_angle <= 0) {
        printf("A valid angle of a triangle must be greater than zero\n");
        exit(1); 
    }else if(first_angle >= 180) {
        printf("One angle of a triangle cannot be greater than or equal to 180\n");
        exit(1); // exit the program with exit code 1 - meaning it didn't run smoothly but was ended
    }

    // Taking in second angle
    printf("Enter second angle and press ENTER: ");

    float second_angle = 0.0;
    if(scanf("%f", &second_angle) != 1) {
        printf("Enter a valid number\n");
        exit(1);
    }

    // Checking sum of first and second angle
    if(second_angle <= 0) {
        printf("A valid angle of a triangle must be greater than zero\n");
        exit(1); 
    }else if((first_angle + second_angle) >= 180) {
        printf("The sum of 2 angles of a triangle cannot be greater than or equal to 180\n");
        exit(1);
    }

    // Checking if either first or second angle is a 90 degree
    if(first_angle == 90 || second_angle == 90) {
        printf("The triangle is a right angled triangle\n");
        return 0;
    }

    // Computing third angle
    float third_angle = 180.0 - (first_angle + second_angle);

    // Checking only third angle to determine if it's a right angled triangle
    if(third_angle == 90) {
        printf("The triangle is a right angled triangle\n");
    }else {
        printf("The triangle is not a right angled triangle\n");
    }

    return 0;
}