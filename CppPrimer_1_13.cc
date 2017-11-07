/* 1.4.1-1.9 */
/*
#include <iostream>
int main(){
    int sum = 0;
    for (int i = 50; i <= 100; ++i){
        sum += i;
    }
    std::cout << "Sum of 50 to 100 is " << sum << std::endl;
    return 0;
}
*/

/* 1.4.1-1.10 */
/*
#include <iostream>
int main(){
    int sum = 0;
    for (int i = 10; i >= 0; --i){
        sum += i;
    }
    std::cout << "The sum of 10 to 0 is " << sum << std::endl;
    return 0;
}
*/

/* 1.4.1-1.11 */
#include <iostream>
int main(){
    int a = 0, b = 0;
    std::cout << "Please enter two int numbers:" << std::endl;
    std::cin >> a >> b;
    if (a <= b){
        for (int i = a; i <= b; ++i){
            std::cout << i << std::endl;
        }
    }
    else {
        for (int i = b; i <= a; ++i){
            std::cout << i << std::endl;
        }
    }
    return 0;
}