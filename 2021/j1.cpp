//boiler plate
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//main function
int main()
{
    // B = input
    int B;
    std::cin >> B;
    // P = 5 x B - 400
    int P = 5 * B - 400;

    //Print P
    std::cout << P << std::endl;

    // Print 1 if P is less than 100 seaLevel = 1. Print -1 if P is greater than 100 seaLevel = -1. Else print 0.
    if (P < 100)
    {
        std::cout << 1 << std::endl;
    }
    else if (P > 100)
    {
        std::cout << -1 << std::endl;
    }
    else
    {
        std::cout << 0 << std::endl;
    }
    return 0;
}