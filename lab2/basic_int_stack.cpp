/* File: basic_int_stack.cpp

  Implementation of functions for basic simple array-based implementation of a stack.

*/
#include <iostream>  
#include "basic_int_stack.h"// contains the declarations of the variables and functions.

Basic_int_stack::Basic_int_stack(){
  // the default constructor intitializes the private variables.
  top_index = -1; // top_index == -1 indicates the stack is empty.
  size_stack=0;
} 

void Basic_int_stack::push( int item ){
  top_index = top_index + 1;
  A[top_index] = item ;
  size_stack= size_stack +1;
}

int Basic_int_stack::top(){
  return A[top_index];
}

int Basic_int_stack::pop(){
	// if (top_index == -1){
	// 	return top_index;
	// }
  top_index = top_index - 1;
  size_stack= size_stack - 1;
  return A[ top_index + 1 ];
}

int Basic_int_stack::size(){

  return size_stack;
}

int Basic_int_stack::item(int element){
  return A[element];
}

bool Basic_int_stack::empty(){
  return top_index == -1 ; 
}
