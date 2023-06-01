# include <iostream>
# include <vector>
# include <algorithm>

// program execution starts from here
int main(int argc, char** argv){
    // variables declared here
    int count = 0, number = 0;
    std::vector<int> numbers;

    // asking for user count
    std::cout << "How many numbers do you want? ";
    std::cin >> count;

    // running for the given user count
    for(int i = 0; i < count; i++){
        // asking for the number and pushing it into the vector
        std::cout << "Enter your number: ";
        std::cin >> number;
        numbers.push_back(number);
    }

    // sorting the numbers
    std::sort(numbers.begin(), numbers.end());
    // storing the last number in a variable
    number = numbers.back();

    // will run until the stored number is no more there in the vector
    while(numbers.back() == number) numbers.pop_back();

    // printing the second largest number 
    std::cout << "\nThe second largest number is " << numbers.back();

    return 0;
}