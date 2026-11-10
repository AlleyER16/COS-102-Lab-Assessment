#include <iostream>
#include <string>
#include <cctype>

// Reverses string and returns it
std::string reverse_string_and_return(std::string original) {
    std::string rev = "";

    for(int i = original.length() - 1; i >= 0; i--) {
        rev += original[i];
    }

    return rev;
}

// Ensures that string only contains numbers
bool check_is_valid_numeric_string(std::string original) {
    bool is_valid = false;

    for(int i = 0; i < original.length(); i++) {
        if(!std::isdigit(static_cast<unsigned char>(original[i]))) {
            break;
        }
        
        if(i == (original.length() - 1)) {
            is_valid = true;
        }
    }

    return is_valid;
}

int main() {

    std::cout << "Welcome to the program to determine if a number is a palindrome" << std::endl;

    std::cout << "Enter the number and press ENTER: ";
    std::string word = "";
    std::cin >> word;

    bool is_valid_numeric_string = check_is_valid_numeric_string(word);

    if(!is_valid_numeric_string) {
        std::cout << "Input is not a valid number" << std::endl;
        exit(1);
    }

    std::string reversed_word = reverse_string_and_return(word);
    
    if(word == reversed_word) {
        std::cout << "The entered number is a palindrome" << std::endl;
    }else {
        std::cout << "The entered number is not a palindrome" << std::endl;
    }

    return 0;
}