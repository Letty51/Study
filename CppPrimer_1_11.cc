#include <iostream>
int main(){
    int a = 0, b = 0, c = 0;
    std::cout << "Please enter two int numbers:" << std::endl;
    std::cin >> a >> b;
    if (a >= b){
        c = b;
        while (c <= a){
            std::cout << c << "\n" << std::endl;
            ++c; 
        }
    }
    else {
        c = a;
        while (c <= b){
            std::cout << c << "\n" << std::endl;
            ++c;
        }
    }
    return 0;
}