#include <iostream>
#include <string>
#include <cmath>

int main() {

    std::cout << "Welcome to the program to determine if a number is a palindrome" << std::endl;

    std::cout << "Enter the number and press ENTER: ";
    std::string word = "";
    std::cin >> word;

    int midpoint = std::floor((word.length() - 1) / 2); // will get the mid index of the array

    for(int i = 0; i <= midpoint; i++) {
        // Checking if the current element is a number
        if(!std::isdigit(static_cast<unsigned char>(word[i]))) {
            std::cout << "Input is not a valid number" << std::endl;
            exit(1);
        }
        
        // Checking if it's equal to it's reverse counterpart
        // The operation word.length() - 1 - i will give the reverse counterpart index
        // For instance word Hello
        // index 0 with that formula gives 5 - 1 - 0 which equals 4 which is the last index
        // index 1 with that formula gives 5 - 1 - 1 which equals 3 which is the last index
        if(word[i] != word[word.length() - 1 - i]) {
            std::cout << "The entered number is not a palindrome" << std::endl;
            return 0;
        }
    }

    std::cout << "The entered number is a palindrome" << std::endl;

    return 0;
}