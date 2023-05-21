#include <iostream>
using namespace std;

int main(){
	short int input,hr,min,a,sec,b;//short int gives 16 bit integer
	//Taking input
	cout<<"Enter a two-byte time value: ";
	cin>>input;
	
	hr=input>>12;//left shifts to 12 gives first 4 bits to right most and 0s in start
	a=input<<4;//removes first 4 bits
	min=a>>10;//removes last six bits causing middle six at the end  
	b=input<<10;//removes first 10 bits
	sec=b>>10;//moves last six bits back to the end 
	
	//Output
	cout<<hr<<" hrs "<<min<<" minutes "<<sec<<" second.";
	return 0;} 
