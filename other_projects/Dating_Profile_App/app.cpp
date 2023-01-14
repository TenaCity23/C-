//============================================================================
// Name        : app.cpp
// Author      : TenaCity23
// Description : Dating App using classes
//============================================================================

#include <iostream> 
#include <string>
#include <vector>
#include "profile.hpp" 
using namespace std; 

int main () { 
    
    Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
    
    sam.add_hobby("listening to audiobooks and podcasts");
    sam.add_hobby("playing rec sports like bowling and kickball");
    sam.add_hobby("writing a speculative fiction novel");
    sam.add_hobby("reading advice columns");

    cout << sam.view_profile() << endl;

    return 0;
}

/* Output: 

Name: Sam Drakkila
Age: 30
City: New York
Country: USA
City: New York
Country: USA
Pronouns: he/him
Hobbies:
 - listening to audiobooks and podcasts
 - playing rec sports like bowling and kickball
 - writing a speculative fiction novel
 - reading advice columns
 
 */
