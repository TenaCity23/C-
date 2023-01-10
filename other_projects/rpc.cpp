//============================================================================
// Name        : rpc.cpp
// Author      : TenaCity23
// Description : Rock, Paper, Scissors!
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;
 
int main() {
  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;

  cout << "====================\n";
  cout << "rock paper scissors!\n";
  cout << "====================\n";
 
  cout << "1) ✊\n";
  cout << "2) ✋\n";
  cout << "3) ✌️\n";
  cout << "shoot! -> ";

  cin >> user; 

  if (computer == 1) { 
    cout << "I chose rock... ";
  } else if (computer == 2) { 
    cout << "I chose paper... ";
  } else { 
    cout << "I chose scissors... ";
  }

  if (computer == 1) {
    switch(user) { 
    case 1:  
      cout << "Tie" << endl; 
      break; 
    case 2: 
      cout << "You win!" << endl; 
      break; 
    case 3: 
      cout << "You lose!" << endl; 
      break;
    default: 
      cout << "error..." << endl; 
    }
  }

  if (computer == 2) {
    switch(user) { 
    case 2:  
      cout << "Tie" << endl; 
      break; 
    case 3: 
      cout << "You win!" << endl; 
      break; 
    case 1: 
      cout << "You lose!" << endl; 
      break;
    default: 
      cout << "error..." << endl; 
    }
  }

  if (computer == 3) {
    switch(user) { 
    case 3:  
      cout << "Tie" << endl; 
      break; 
    case 1: 
      cout << "You win!" << endl; 
      break; 
    case 2: 
      cout << "You lose!" << endl; 
      break;
    default: 
      cout << "error..." << endl;
    } 
  }

  return 0; 
}
