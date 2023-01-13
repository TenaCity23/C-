//============================================================================
// Name        : basic_palindrome.cpp
// Author      : TenaCity23
// Description : Checking for palindrome!! - the basic way
//============================================================================

#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(std::string text) {
  
    string reversed_text = "";
    
    for (int i = text.size() - 1; i >= 0; i--) {
        reversed_text += text[i];
    }
    
    if (reversed_text == text) {
        return true;
    }
    
    return false;
}

int main() {
  
    cout << is_palindrome("madam") << "\n";
    cout << is_palindrome("ada") << "\n";
    cout << is_palindrome("lovelace") << "\n";

    return 0;
}



/* Final Output: 

1
1
0

*/
