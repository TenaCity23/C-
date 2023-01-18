//============================================================================
// Name        : LinkedList.cpp
// Author      : TenaCity23
// Description : Practice using LinkedList Class w/Nodes
//============================================================================

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(int argc, const char * argv[]) {

    LinkedList<int> b1;
    b1.appendNode(5);
    b1.appendNode(51);
    b1.appendNode(15);

    b1.displayList();

    cout << "_________________\n\n";

    LinkedList<double> bd;
    bd.appendNode(115.5);
    bd.appendNode(151.9);
    bd.appendNode(1115.3);

    bd.displayList();

    cout << "_________________\n\n";

    LinkedList<string> sd;
    sd.appendNode("Book");
    sd.appendNode("Table");
    sd.appendNode("This is a sentence.");

    sd.displayList();

    cout << "_________________\n\n";

    LinkedList<string> i1;

    i1.insertNode("Hello");
    i1.insertNode("there");
    i1.insertNode("Alpha");
    i1.deleteNode("Hello");


    i1.displayList();

    return 0;
}

/* Output: 

5
51
15
_________________

115.5
151.9
1115.3
_________________

Book
Table
This is a sentence.
_________________

Alpha
there

*/
