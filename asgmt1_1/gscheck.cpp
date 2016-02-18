#include <iostream>
#include <fstream>
#include <string>
#include "char_stack.h"

using namespace std;

void rev_line(char arr[], int len_arr, char_stack s);

int main(){
  char strline[250];

  int line=0;
	char_stack s;
int line_num=0;


	while(cin.getline(strline, 250)){
		int lenstr=cin.gcount();
		line_num+= 1 ;
		rev_line(strline,lenstr,s);
		cout << "STRING FROM CINgg:" << strline << endl;
		cout << "LEN STRING kkkk:" << lenstr << endl;
	}
	// s.push('(');
	// 	s.push('[');
	// 		cout<< "top: "<<s.top() << endl;
	// 		cout<< "size: " <<s.size() << endl;

	// 		s.pop();
	// 		cout<< "top: "<<s.top() << endl;
	// 		cout<< "size: " <<s.size() << endl;}
	



	

}

void rev_line(char arr[], int len_arr, char_stack s){ 
    int driver=len_arr;

	while(driver !=0){
		char charprobe= cin.peek();

		if (charprobe== '('||
	      charprobe== '{' ||
	      charprobe== '['){
	      s.push(charprobe);
	    cout<< "top: "<<s.top() << endl;
	    } 
	     // else if (charprobe= s.top(){ 
	     // }

	
	     driver-=1;
	 }
}