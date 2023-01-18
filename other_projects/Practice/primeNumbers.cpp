//============================================================================
// Name        : primeNumbers.cpp
// Author      : TenaCity23
// Description : Prime Numbers from 2 to inputted number
//============================================================================

#include <iostream>
using namespace std; 

int main () {
    
    int number = 20;                            // Prime Number = divisible by 1 and itself only
    
    cout << "The primes of between 2 and ";
    cout << number;
    cout << " are as follows: " << endl; 
    
    bool prime = true;

    for (int i = 2; i < number; i++) {          // Loop to count from 2 - 20 
        prime = true;                           // (re)Set prime to true

        for (int j = 2; j <= (i-1); j++) {      // Loop to test if number is divisible by any other number
            if (i % j == 0) {                   // If divisible, not prime and break from loop
                prime = false;
                break;
            } 
        }

        if (prime == true) {                    // If prime, print out number
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}

/* Output: 

The primes of between 2 and 20 are as follows: 
2 3 5 7 11 13 17 19

*/
