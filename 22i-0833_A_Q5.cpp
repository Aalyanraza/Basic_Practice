#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){

	int hw, nh, tax,netpay;
	//Taking Input
	cout<<"Enter hourly wage: ";
	cin>>hw;
	cout<<"Enter number of hours: ";
	cin>>nh;
	cout<<"Enter withholding tax: ";
	cin>>tax;
	
	//Formula
	netpay= (hw*nh)-(25*hw*nh)/100;
	
	//Output
	cout<<"Netpay:"<<netpay<<endl;
	return 0;
	} 	
