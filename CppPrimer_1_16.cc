#include <iostream>
int main(){
    std::cout << "Please enter a group of number end with EOF." << std::endl;
    long sum = 0, value = 0;
    while (std::cin >> value){
        sum += value;
    }
    std::cout << "The sum of this group of number is " << sum << std::endl;
    return 0;
}