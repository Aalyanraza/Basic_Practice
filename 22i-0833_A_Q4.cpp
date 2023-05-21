#include <iostream>
#include <iomanip>
#include <string>
#include<cmath>
using namespace std;

int main(){
	int i,a,b,u=3,p=4;
	double result, num,den1,den2;
	//Taking input
	cout<<"Value of i: ";
	cin>>i;
	cout<<"Value of a: ";
	cin>>a;
	cout<<"Value of b: ";
	cin>>b;
	
	/*
	num=pow((u*pow(i,(static_cast<double>(a)/b))*(pow(i,2)-1)),0.5);
	den1=pow((p*static_cast<double>(i)-1),0.5);
	den2=pow((p*static_cast<double>(i)-2),0.5);
	*/
	
	//Formula: num/(den1+den2)
	result=  (pow((u*pow(i,(static_cast<double>(a)/b))*(pow(i,2)-1)),0.5))/((pow((p*static_cast<double>(i)-1),0.5))+(pow((p*static_cast<double>(i)-2),0.5)));
	
	//Output
	cout<<"Result: "<<result<<endl;
	return 0;}
