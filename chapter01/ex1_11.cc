#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    while (v1 <= v2) {
        std::cout << v1 << " ";
        ++ v1;
    }
    std::cout << std::endl;
    return 0;
}
