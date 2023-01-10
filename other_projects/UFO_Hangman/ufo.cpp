#include <iostream>
#include <string>
#include "ufo_functions.hpp"
using namespace std;

int main() {

    int misses = 0;
    string codeword = "codecademy";
    string answer;
    for (int i = 0; i < codeword.size(); i++) { 
        answer += '_';
    }
    cout << endl;
    
    greet ();

    vector<char> incorrect; 
    bool guess = false;

    char letter; 

    while (answer != codeword && misses < 7) { 

        display_misses(misses);
        display_status(incorrect, answer);

        cout << endl << "Please enter your guess: "; 
        cin >> letter;

        for (int i = 0; i < codeword.size(); i++) { 
            if(letter == codeword[i]) { 
                answer[i] = letter; 
                guess = true; 
            }
        }

        if (guess == true) { 
            cout << "Correct!" << endl;
        } else { 
            cout << "Incorrect! The tractor beam pulls the person in further." << endl;
            incorrect.push_back(letter);
            misses++;
        }

        guess = false;
    }

    end_game(answer, codeword);
    
    cout << endl; 
    return 0;
}
