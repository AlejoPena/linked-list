/* File: char_stack.h       

  Header file for a very basic array-based implementation of a stack.

*/
class char_stack
{
  public:
    char_stack();
    void push( char item );
    char pop(); 
    char top();
    bool empty();
    int size();

  private:
   // This part is implementation-dependant.
    static const int capacity = 250000 ; // the array size 
    char A[capacity] ; // the array.
    char top_index ; // this will index the top of the stack in the array
    int size_ar ;
};