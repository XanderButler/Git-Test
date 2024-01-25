#include <iostream>

int sum(int n) {
    int result = 0;
    for (int i = 1; i <= n; ++i) {
        result += i;
    }
    return result;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    
    std::cout << "Enter a number, n: ";
    
    int n;
    std::cin >> n;

    std::cout << "Sum of numbers from 1 to " << n << ": " << sum(n) << std::endl;

    return 0;
}
