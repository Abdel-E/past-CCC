//boiler plate
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//main function
int main()
{
    // N = input, 1 <= N <= 100
    int N;
    cin >> N;

    string name;
    string winName;
    int bid = 0;

    // For N times, do the following: collect variables name, and bid. Print the name of the highest bidder.
    for (int i = 0; i < N; i++)
    {
        int tempBid;
        cin >> name;
        cin >> tempBid;
        if (tempBid > bid)
        {
            bid = tempBid;
            winName = name;
        }
    }
    cout << winName << endl;
    

    return 0;
}