#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

template <class T>
class LinkedList {
private:
    struct ListNode {					// Declare a structure for the list
        T value;                		// The value in this node
        struct ListNode *next;  		// To point to the next node
    };

    ListNode *head;   					// List head pointer

public:
    LinkedList() { 						// Constructor
    	head = nullptr;
    }

    ~LinkedList();						// Destructor

    // Linked list operations
    void appendNode(T);
    void insertNode(T);
    void deleteNode(T);
    void displayList() const;
};


//**********************************************
// Appends a node containing the value passed  *
// into newValue, to the end of the list.	   *
//**********************************************

template <class T>
void LinkedList<T>::appendNode(T newValue)
{
    ListNode *newNode;  				// To point to a new node
    ListNode *nodePtr;  				// To move through the list

    newNode = new ListNode;				// Allocate a new node and store newValue.
    newNode->value = newValue;
    newNode->next = nullptr;

    if (!head)							// If there are no nodes in the list, make newNode the first node.
        head = newNode;
    else								// Otherwise, insert newNode at end.
    {
        nodePtr = head;					// Initialize nodePtr to head of list.

        while (nodePtr->next)			// Find the last node in the list.
            nodePtr = nodePtr->next;

        nodePtr->next = newNode;		// Insert newNode as the last node.
    }
}


//*******************************************
// Shows the value stored in each node of 	*
// the linked list pointed to by head.      *
//*******************************************

template <class T>
void LinkedList<T>::displayList() const
{
    ListNode *nodePtr;  				// To move through the list

    nodePtr = head;						// Position nodePtr at the head of the list.

    while (nodePtr)						// While nodePtr points to a node, traverse the list.
    {
        cout << nodePtr->value << endl;	// Display the value in this node.

        nodePtr = nodePtr->next;		// Move to the next node.
    }
}


//**************************************************
// The insertNode function inserts a node with     *
// newValue copied to its value member.            *
//**************************************************

template <class T>
void LinkedList<T>::insertNode(T newValue)
{
    ListNode *newNode;            		// A new node
    ListNode *nodePtr;                  // To traverse the list
    ListNode *previousNode = nullptr;   // The previous node

    newNode = new ListNode;				// Allocate a new node and store newValue there.
    newNode->value = newValue;

    if (!head)							// If there are no nodes in the list, make newNode the first node
    {
        head = newNode;
        newNode->next = nullptr;
    }
    else  								// Otherwise, insert newNode
    {
    	nodePtr = head;					// Position nodePtr at the head of list.
    	previousNode = nullptr;			// Initialize previousNode to nullptr.

        // Skip all nodes whose value is less than newValue.
        while (nodePtr != nullptr && nodePtr->value < newValue)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        // If the new node is to be the 1st in the list, insert it before all other nodes.
        if (previousNode == nullptr)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else  							// Otherwise insert after the previous node.
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}


//*****************************************************
// The deleteNode function searches for a node        *
// with searchValue as its value. The node, if found, *
// is deleted from the list and from memory.          *
//*****************************************************

template <class T>
void LinkedList<T>::deleteNode(T searchValue)
{
    ListNode *nodePtr;       			// To traverse the list
    ListNode *previousNode;  			// To point to the previous node

    if (!head)							// If the list is empty, do nothing.
        return;

    if (head->value == searchValue)		// Determine if the first node is the one.
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else
    {
        nodePtr = head;					// Initialize nodePtr to head of list

        // Skip all nodes whose value member is not equal to num.
        while (nodePtr != nullptr && nodePtr->value != searchValue)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        // If nodePtr is not at the end of the list, link the previous node to the node after nodePtr, then delete nodePtr.
        if (nodePtr)
        {
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
    }
}


//**************************************************
// Destructor                                      *
// This function deletes every node in the list.   *
//**************************************************

template <class T>
LinkedList<T>::~LinkedList()
{
    ListNode *nodePtr;   				// To traverse the list
    ListNode *nextNode;  				// To point to the next node

    nodePtr = head;						// Position nodePtr at the head of the list.

    while (nodePtr != nullptr)			// While nodePtr is not at the end of the list...
    {
    	nextNode = nodePtr->next;		// Save a pointer to the next node.

    	delete nodePtr;					// Delete the current node.

    	nodePtr = nextNode;				// Position nodePtr at the next node.
    }
}

#endif
