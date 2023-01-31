//============================================================================
// Name        : encryption.cpp
// Author      : TenaCity23
// Description : Encrypting an inputted string and printing out the result
//============================================================================

#include <iostream> 
#include <string>
using namespace std; 
#define SIZE 100

int main () { 

    string message;
    char encrypt[SIZE];     // Using a defined SIZE prevents 'stack smashing'        

    cout << "Enter the message to encrypt: "; 
    getline(cin, message, '\n');

    int size = message.length();
    int shift = 0;

    cout << "Enter the shift amount: "; 
    cin >> shift;

    for (int i = 0; i < size; i++) { 
        if ((message[i] >= 'A') && (message[i] <= 'Z')) { 
            encrypt[i] = ((((message[i] - 'A') + shift) % 26) + 'A');
        } else if ((message[i] >= 'a') && (message[i] <= 'z')) { 
            encrypt[i] = ((((message[i] - 'a') + shift) % 26) + 'a');
        } else { 
            encrypt[i] = message[i];
        }
    }

    cout << "The encrypted message is: ";
    for (int j = 0; j < size; j++) { 
        cout << encrypt[j];
    }
    cout << endl;
    
    return 0;
}

/* Output: 

Enter the message to encrypt: Hello there! Random symbols: !@#
Enter the shift amount: 5
The encrypted message is: Mjqqt ymjwj! Wfsitr xdrgtqx: !@#

*/
