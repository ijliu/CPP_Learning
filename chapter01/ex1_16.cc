#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Enter some numbers (Ctrl+z to end):" << std::endl;
    int sum = 0, val = 0;
    while (std::cin >> val) {
        sum += val;
    }
    std::cout << "Sum is " 
              << sum << std::endl;
    return 0;
}
