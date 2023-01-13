//============================================================================================
// Name        : Fibonacci.cpp
// Author      : TenaCity23
// Description : Function to find the sum of a number using the Fibonacci sequence
//============================================================================================

#include <iostream>
using namespace std;

int fibonaci (int n) {
	int result;

	for (int i = 1; i < n; i++) {
		result = i + i;
	}

	return result;
}


int main() {

	int fib;
	int m = 2;
    
	fib = fibonaci(m);
	cout << "Fibonnaci Sequence of 1: " << fib << endl;

	int fib2;
	int j = 5;
    
	fib2 = fibonaci(j);
	cout << "Fibonnaci Sequence of 5: " << fib2 << endl;

	return 0;
}

/* Output: 

Fibonnaci Sequence of 1: 2
Fibonnaci Sequence of 5: 8

*/
