//============================================================================
// Name        : reversingTemplateArray.cpp
// Author      : TenaCity23
// Description : Reversing a template array
//============================================================================

#include <iostream>
#include <string>
using namespace std;

template<typename T>
T *reverseArray(T *arr, int size)           // Passes by pointer
{
	T *result = new T[size];                // Allocates new memory location for the array "result" with size "size"
    
	for (int i = 0; i < size; i++) {
		result[i] = arr[size - i - 1];      // Reverses the order of the original array and places the value into the result array
	}
    
	return result;  
}

template<typename T>
void printArray(T *arr, int size)           // Passes by pointer
{
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";          // Prints out the array, using pointer notation
	}
    
	cout << endl;
}


int main() {

	int arr1[] = {1, 2, 3, 4, 5}; 
	int size1 = 5;
    
	string arr2[] = {"Hello", "there", "I", "am", "Me"}; 
	int size2 = 5;

	cout << "Original Array: ";
	printArray(arr1, size1);

	cout << "Reversed Array: ";
	printArray(reverseArray(arr1, size1), size1);

	cout << endl;

	cout << "Original Array: ";
	printArray(arr2, size2);

	cout << "Reversed Array: ";
	printArray(reverseArray(arr2, size2), size2);

	return 0;
}

/* Output:

Original Array: 1 2 3 4 5
Reversed Array: 5 4 3 2 1

Original Array: Hello there I am Me
Reversed Array: Me am I there Hello

 */
