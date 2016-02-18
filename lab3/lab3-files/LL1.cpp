// Implementation of the LinkedList class
// Version 1: Full of memory leaks.

#include "LL1.h"
#include <string>
#include <iostream>

using namespace std; 

// Default constructor
LL1::LL1(){
	head = NULL;
	size = 0;
}

// Copy constructor.
// Makes a copy of a given LL1 instance.
/* This version of the copy constructor only creates a SHALLOW COPY.
  * it copies the size and head variables, but this does not create 
  * a new list.  It creates a new instance of the LL1 class,
  * in which head points to the first node of the LL1 instance 
  * it is supposed to be a copy of. Thus, there are two LL1 instances, 
  * one actual linked list of nodes! */
LL1::LL1(const LL1& lst){
        head = lst.head; //shallow copy - this is an error!
        size = lst.size;
}

// Destructor.
/* The destructor is responsible for deleting any memory that was dynamically
 * allocated by an object.  If there is no such memory no destructor needs to
 * be created (the compiler automatically creates one).  Because this class
 * uses pointers to create new Nodes it is necessary to write a destructor.
 * Destructors are identified by the '~' preceding the class name.  There can
 * be only one destructor for a class, and it cannot have parameters.
 * This implementation, unfortunately, does not do its job, resulting in a 
 * memory leak. */
LL1::~LL1(){

}


/**************************************************************************/
// Operations

// Adds a node to the start of the list, making it the new head
void LL1::add(int x){
	Node *p = new Node; //temporary node
	// Assign appropriate values to the new node
	p -> data = x;
	p -> next = head;
	// Make the head point to the new node
	head = p;	
	size++;

}

// Inserts a new node at the given position (or index) in the list
void LL1::insertAt(int pos, int x){
        Node *p;
        Node *newNode;

        // Check that pos is a valid index
        if (pos <= size){
                newNode = new Node; //new node
                newNode->data = x;

                // Deal with case when item is to be inserted at the head of the list
                if (pos == 0){
                        newNode->next = head;
                        head = newNode;
                }// if(pos == 0)
                else{
                        p = head;
                        // Move to position BEFORE insertion point
                        for(int i = 0; i < pos-1; i++){
                                // Check that p points to a node
                                // Note using exception handling should throw an exception here
                                if(p == NULL){
                                        return;
                                }
                                p = p->next;
                        }//for
                        // Insert node
                        newNode->next = p->next;
                        p->next = newNode;
                }//else (pos != 0)
                size++;
        }//else (pos >= size) do nothing
}


// Removes the first node containing the given data, returns true
// iff data is found (and removed).
bool LL1::remove(int x){
	Node *p = head;
	Node *tmpy = p;
	
	// Check to see if the list exists
	if (head == NULL){
		return false;
	}
	// Check to see if target is at the head of the list
	else if (head->data == x){
		head = head->next;
		size--;
		delete p;
		return true;
	}
	// Otherwise iterate through list
	else{
		while(p->next != NULL){
			// Check next node for target
			if(p->next->data == x){
				tmpy = p->next;
				p->next = p->next->next;
				delete tmpy;
				size-- ;
				return true;
                                
			}
			p = p->next;
		}
		
		
	}
	return false;
}

// Empties the list.
void LL1::removeAll(){
  
  Node *p=head;
  Node *tmpy= p;
 


		 while(p != NULL){
			// Check next node for target
  		
  		//cout << "item: "<< head->data << endl;
  	        p = p->next;
  	 		//head=head->next;
  	        //cout <<"head2: "<< head->data <<endl;
			delete tmpy;
			//cout << "3"<<endl;
			//size-- ;
        
            //cout << "size: "<< size << endl;
			
			tmpy=p;
		}

	/*if(head->next!= NULL){
		delete head;
	}*/
	//size = 0;
}

// Prints the entire list (head first) to the screen.
/* Note that there is some debate about whether or not this type of
 * method belongs in a class.  The argument (briefly) is that a class
 * shouldn't be responsible for its own display as it cannot foresee
 * how it is to be displayed. */
void LL1::printList(){
	Node *p = head;
	cout << "["; //Nice format!
	// Traverse the list
	while (p != NULL){
		cout << p -> data; // Print data
		p = p -> next; // Go to next node
		if (p != NULL){
			cout << ","; // Print a comma unless at the end of the list
		}
	}
	cout << "]"; // Don't print a newline - it might not be wanted
}
