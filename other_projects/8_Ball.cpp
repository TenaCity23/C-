//============================================================================
// Name        : 8_Ball.cpp
// Author      : TenaCity23
// Description : Magic 8-Ball program that prints out random replies 
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main () { 
  cout << "MAGIC 8-BALL: " << endl; 

  srand(time(NULL));
  int answer = rand() % 10;

  if (answer == 0) {
    cout << "It is certain." << endl; 
  } else if (answer == 1) { 
    cout << "Without a doubt." << endl; 
  } else if (answer == 2) { 
    cout << "You may rely on it." << endl; 
  } else if (answer == 3) { 
    cout << "Most likely.\n";
  } else if (answer == 4) { 
    cout << "Yes.\n";
  } else if (answer == 5) { 
    cout << "Reply hazy, try again.\n";
  } else if (answer == 6) { 
    cout << "Better not to tell you now.\n";
  } else if (answer == 7) { 
    cout << "Concentrate and ask again.\n";
  } else if (answer == 8) { 
    cout << "My reply is no.\n";
  } else if (answer == 9) { 
    cout << "Outlook not so good.\n";
  } else if (answer == 10) { 
    cout << "Very doubtful.\n";
  } else {
    cout << "Hmm...\n";
  }

  return 0;
}
