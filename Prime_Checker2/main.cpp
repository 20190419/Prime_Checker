#include <iostream>

using namespace std;

#include <iostream>
#include <cmath>
#include <cstdlib>

int main()
{
    size_t primeRange = 0;
    cout << "Enter a range for prime numbers: ";
    cin >> primeRange;

    cout << "Prime numbers from 2 to " << primeRange << " are:\n"
              << " 2 "; // There's only one even prime number i.e. 2;
                        // we can skip all the remaining even numbers.

    for (size_t number = 3; number <= primeRange; number += 2)
    {
        bool isPrime = true;
        const double squareRoot = sqrt(number);
        for (size_t i = 2; i <= squareRoot; ++i)
        {
            if (number % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << number << " ";
        }
    }

    return EXIT_SUCCESS;
}
