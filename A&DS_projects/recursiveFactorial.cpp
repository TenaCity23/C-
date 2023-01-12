//============================================================================
// Name        : recursiveFactorial.cpp
// Author      : TenaCity23
// Description : Recursive function that outputs the factorial of a given number
//============================================================================

#include <iostream>
using namespace std;

int factorial (int n) {
	if (n <= 1) {
		return 1;
	} else {
		int result = n * factorial(n-1);
		return result;
	}
}

int main() {
	int result;
	int n = 4;
  
	result = factorial(n);
	cout << "Factorial of " << n << " is " << result << endl;
  
	return 0;
}



/* Output: 

Factorial of 4 is 24

*/
