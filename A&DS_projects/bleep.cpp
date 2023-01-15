//============================================================================
// Name        : bleep.cpp
// Author      : TenaCity23
// Description : Algorithm to Censor a key word from a sentence
//============================================================================

#include <iostream> 
#include <string> 
using namespace std;

void bleep(string word, string &text) {     
    for(int i = 0; i < text.size(); i++) { 
        int count = 0;

        for(int j = 0; j < word.size(); j++) {
            if (word[j] == text[i+j]) { 
                count++;
            } 
        }

        if(count == word.size()) { 
            for(int k = 0; k < word.size(); k++) { 
                text[k+i] = '*';
            }   
        }    
    }
}

int main () { 

    string word = "broccoli";
    string text = "I like broccoli a lot. I think broccoli is very healthy. #broccoli";

    bleep(word, text);
    cout << text << endl;

    return 0;
}



/* Output:

I like ******** a lot. I think ******** is very healthy. #********

*/
