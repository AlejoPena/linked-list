#include "char_stack.h"

char_stack::char_stack(){
  // the default constructor intitializes the private variables.
  top_index = -1; // top_index == -1 indicates the stack is empty.
  size_ar=0;
} 

void char_stack::push( char item ){
  top_index = top_index + 1;
  size_ar= size_ar + 1;
  A[top_index] = item ;
}

char char_stack::top(){
  return A[top_index];
}

char char_stack::pop(){
  top_index = top_index - 1 ;
  size_ar= size_ar - 1;
  return A[ top_index + 1 ];
}

int char_stack::size(){
  return size_ar ;
}

bool char_stack::empty(){
  return top_index == -1 ; 
}