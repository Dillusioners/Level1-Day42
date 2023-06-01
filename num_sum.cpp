# include <iostream>

// main program starts from here
int main(int argc, char** argv){
    // variables declared here
    int input, total = 0, count;

    // asking user the total number of integers to input
    std::cout << "How many numbers you want to input? ";
    std::cin >> count;
    std::cout << std::endl;

    // iterating for the given count
    for(int i = 0; i < count; i++){
        // asking user for the number
        std::cout << "Enter the number: ";
        std::cin >> input;
        // adding the input to the total
        total += input;
    }

    // printing total
    std::cout << "\nThe total is " << total;
    return 0;
}