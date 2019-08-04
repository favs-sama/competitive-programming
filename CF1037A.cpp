#include <iostream>

int main()
{
    int n, resp;
    
    int sum = 0;
    
    std::cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        std::cin >> resp;
        sum += resp;
    }
    
    sum == 0 ? std::cout << "EASY" : std::cout << "HARD";
}