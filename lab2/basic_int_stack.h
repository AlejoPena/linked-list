/* File: basic_int_stack.h       

  Header file for a very basic array-based implementation of a stack.

*/
#include <iostream>  ///INCLUDES BY ME
class Basic_int_stack
{
  public:
    // This part should be implementation independent.
    Basic_int_stack();        // CONSTRUCTOR
    void push( int item );
    int pop(); 
    int top();
    int size();
    int item(int element);
    bool empty();



  private:
    // This part is implementation-dependant.
    static const int capacity = 10 ; // the array size 
    int A[capacity] ; // the array.
    int top_index ; // this will index the top of the stack in the array
    int size_stack ;
};
