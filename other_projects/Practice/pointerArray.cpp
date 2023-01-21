//============================================================================
// Name        : pointerArray.cpp
// Author      : TenaCity23
// Description : Editing an array using functions and pointers
//============================================================================

#include <iostream>
using namespace std;

void enterArrayData(int *arr, int size) {               // Function to enter the array data via pointers
	cout << "Enter the elements in array: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);                              // Pointer notation
	}
}

void outputArrayData(int *arr, int size) {              // Function to output the array data via pointers
	cout << "The array elements are: " << endl;
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << endl;                     //pointer notation
	}
}

void sumArray(int *arr, int size) {                     // Function to outpute the sum of array elements via pointers
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + *(arr + i);
	}
	cout << "The sum of the array elements is " << sum << endl;
}


int main () {

	int arr[100]; 
	int* ptr = arr; 
	int size; 

	cout << "Enter how many elements you would like to enter within the array: "; 
	cin >> size;

	ptr = new int [size];                               // Allocates a new memory location for the pointer array with size

	enterArrayData(ptr, size);
	outputArrayData(ptr, size);
	sumArray(ptr, size);

	return 0;
}

/* Output:

Enter how many elements you would like to enter within the array: 3
Enter the elements in array:
1
2
3
The array elements are:
1
2
3
The sum of the array elements is 6

 */
