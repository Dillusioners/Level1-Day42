# include <iostream>
# include <string>

// main program execution starts from here
int main(int argc, char** argv){
    std::string input;

    // asking for the user string
    std::cout << "Enter your string: ";
    std::cin >> input;
    std::cout << std::endl;

    // if the input and the reversal of the input are the same
    if(input == std::string(input.rbegin(), input.rend())) std::cout << "The string is palindrome.";
    else std::cout << "The string is not palindrome.";
    return 0;
}