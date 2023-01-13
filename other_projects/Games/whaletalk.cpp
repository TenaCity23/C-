//============================================================================
// Name        : whaletalk.cpp
// Author      : TenaCity23
// Description : Whale Talk (vowels from a sentence only)
//============================================================================

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Given a string, take all vowels and push them into a vector and print out the "whale talk"

int main() {
  
    string s = "turpentine and turtles";
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<char> result;

    for(int i = 0; i < s.size(); i++) { 
        for(int j = 0; j < vowels.size(); j++) { 
            if(s[i] == vowels[j]) { 
                result.push_back(s[i]);
            }
        }
        
        if(s[i] == 'e' || s[i] == 'u') { 
            result.push_back(s[i]);
        }
    }

    for(int i = 0; i < result.size(); i++) { 
        cout << result[i];
    }

    cout << endl;
    return 0; 
}

/* Output: 

uueeieeauuee

*/
