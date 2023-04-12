// boiler plate
#include <iostream>
#include <string>

using namespace std;

// main function
int main()
{

    // Initialize variables
    string books;
    int length;
    int x = 0;
    string biggest = "Z";
    int pos;

    // Input variables
    cin >> books;

    // Record length of input
    length = books.length();

    // Loop through input
    for (int i = 0; i < length; i++)
    {
        // Loop through all letters beyond i to find biggest
        for (int j = length - 1; j >= i; j--)
        {
            // If the letter is bigger than the current biggest, record it
            if (int(biggest[0]) >= int(books[j]) && books[j] >= 76)
            {
                biggest[0] = books[j];
                pos = j;
            }
            // If current letter is same as i, and i is not the biggest, swap i and biggest.
            if (j == i && books[i] != biggest[0])
            {
                books[pos] = books[i];
                books[i] = biggest[0];
                x++;
            }
        }
        // Reset variables to avoid errors
        biggest[0] = 'Z';
    }

    // Prints minimum number of swaps needed to sort the books
    cout << x;
}