#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "/*";   // correct
    std::cout << "*/";   // correct
    // std::cout << /* "*/" */;  // wrong
    std::cout << /* "*/" /* "/*" */;  // correct
    return 0;
}
