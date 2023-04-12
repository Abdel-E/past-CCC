#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int code;
    string direction;
    string output[100][2];
    int i = 0;

    // For loop 4 times, input variable code, make sure it is a 5 digit number
    while (true) {
        std::cin >> code;

        if (code == 99999)
        {
            for (int x = 0; x < i; x++)
            {
                std::cout << output[x][0] << output[x][1] << std::endl;
            }
            return 0;
        }

        
        // If code first 2 digits add up to an odd number, print "left" and the remaining digits
        if ((code / 10000 + code / 1000 % 10) % 2 == 1)
        {
            direction = "left ";
            output[i][1] = direction + to_string(code % 1000);
            i++;
        }
        // If code first 2 digits add up to an even number, print "right" and the remaining digits
        else if ((code / 10000 + code / 1000 % 10) % 2 == 0)
        {
            direction = "right ";
            output[i][1] = direction + to_string(code % 1000);
            i++;
        }
        // If code first 2 digits add up to 0, print the last direction and the remaining digits
        else
        {
            output[i][1] = direction + to_string(code % 1000);
            i++;
        }
    }
}