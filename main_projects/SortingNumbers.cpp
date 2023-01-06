//============================================================================
// Name        : SortingNumbers.cpp
// Author      : TenaCity23
// Description : Sorting Numbers: ascending and descending
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int arr[5] = {3,2,4,5,1} ;
	int n = 5;
	int i, j;
	int temp;

  
	for(i = 0; i < n; i++) {
		for(j = i + 1; j < n; j++) {
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "Sorted (Ascending) Array elements:" << endl;
	for(i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;
	cout << endl;


	for(i = 0; i < n; i++) {
		for(j = 0; j <= i; j++) {
			if(arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "Sorted (Descending) Array elements:" << endl;
	for(i = 0; i < n; i++)
		cout << arr[i] << "\t";
 	cout << endl;
	cout << endl;


	return 0;
}

/* Output: 

Sorted (Ascending) Array elements:
1	2	3	4	5	

Sorted (Descending) Array elements:
5	4	3	2	1	

*/
