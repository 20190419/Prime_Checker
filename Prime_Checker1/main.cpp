#include <iostream>

using namespace std;

#include <iostream>
#include <cmath>
#include <cstdlib>

bool isPrime(const size_t number);

int main()
{
    size_t number = 0;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
    {
        cout << number << " is a PRIME number.\n";
    }
    else
    {
        cout << number << " is NOT a PRIME number.\n";
    }
    return EXIT_SUCCESS;
}

bool isPrime(const size_t number)
{
    const double squareRoot = sqrt(number);
    for (ssize_t i = 2; i <= squareRoot; ++i)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}
