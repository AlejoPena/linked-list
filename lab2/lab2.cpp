//
//  Test Program for Basic Int Stack Class
//
#include <iostream>   // for I/O facilities
#include "basic_int_stack.h" //  basic_int_stack declarations
using namespace std;

int main (int argc, char * const argv[]) {
    //cout << "\n\nbasic_int_stack Class Test Procedure - START\n\n";
	
	// Make a stack, and verify that empty() says it is empty. 
	 cout << "Alejandro Pena" << endl;
	 cout << "apena" << endl;
	 cout << "301241286" << endl;
	Basic_int_stack s1 ;  //instance of stack


	int item= 0;

	while (item > -1){      //ENTRER ITEMS TO STACK
		cin >>item ;
		if (item > -1){
			s1.push(item);
		}

	}

	 cout  << endl;

	 cout  << s1.size() << endl;

	 int sum_itmems = 0;
	 int elements = s1.size() - 1;    
	 while(elements != -1){  /// SUM OF ELEMENTS OF STACK
	 	sum_itmems=sum_itmems + s1.item(elements);
	 	elements -= 1;

     }
     cout  << sum_itmems;
	 cout  << endl;

	////POP ELEMENTS OF STACK
	 while( ! s1.empty() ){    
		cout << "s1.pop() = " << s1.pop() << endl;
	}

	cout << "goodbye" << endl;

 //        // Put some things on it. 
	// cout << "s1.push( " << 1 << " )\n";
	// s1.push(1);
	// cout << "s1.push( " << 2 << " )\n";
	// s1.push(2);

 //        // Verify that empty() reports it is not empty, 
 //        // and that the right thing is on top.
	// cout << "s1.empty() = " << s1.empty() << "\n";
	// cout << "s1.top() = " << s1.top() << "\n";
	
 //        // Empty it, and verify that empty() again reports it is empty.
	// while( ! s1.empty() ){
	// 	cout << "s1.pop() = " << s1.pop() << "\n";
	// }
	// cout << "s1.empty() = " << s1.empty() << "\n";
	
	// cout << "\n\nBasic_int_stack Class Test Procedure - DONE\n\n";
    return 0;
}
;