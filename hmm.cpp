#include <iostream>

int main() {
    bool missornot;

    std::cout << "do you miss her? (t/f): ";
    std::cin >> missornot;

    if(missornot) std::cout << "i miss p'nina teesud";
    else std::cout << "you liar";
}