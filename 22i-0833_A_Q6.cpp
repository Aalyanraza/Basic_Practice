#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
	int input, fh,h,ff,tw,tn,fv;
	
	//Taking input
	cout<<"Enter Amount :Rs.  ";
	cin>>input;
	//Calculations
	fh= input/500;
	input=input%500;
	h=input/100;
	input=input%100;
	ff=input/50;
	input=input%50;
	tw=input/20;
	input=input%20;
	tn=input/10;
	input=input%10;
	fv=input/5;
	input=input%5;

	
	//Output
	cout<<"Currency Note       : Number\n";
	cout<<"500                 : "<<fh<<endl;
	cout<<"100                 : "<<h<<endl;
	cout<<"50                  : "<<ff<<endl;
	cout<<"20                  : "<<tw<<endl;
	cout<<"10                  : "<<tn<<endl;
	cout<<"5                   : "<<fv<<endl;
	cout<<"1                   : "<<input<<endl;
	}
