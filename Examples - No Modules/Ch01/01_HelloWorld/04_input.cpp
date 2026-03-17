#include <iostream>
#include <format>

int main()
{
    int value;
    std::cin >> value;
    std::cout << std::format("You entered {}", value);

    return 0;
}
