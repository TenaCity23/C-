//============================================================================
// Name        : factors.cpp
// Author      : TenaCity23
// Description : Finding all factors of a number
//============================================================================

#include <iostream>
using namespace std;

int main() {

    int num, i;

//    cout << "Enter a positive integer: ";
//    cin >> num;

    num = 100;

    cout << "Factors of " << num << " are: " << endl;

    for (i = 1; i <= num; i++) {
    	if (num % i == 0) {
    		cout << i << " ";
    	}
    }

    return 0;
}

/* Output:

Factors of 100 are:
1 2 4 5 10 20 25 50 100

 */
