#include <iostream>
using namespace std;
int main() {
    int number1, number2, car,sum;
    //taking input
    cout<<"Enter Number 1: ";
    cin>>number1;
    
    cout<<"Enter Number 2: ";
    cin>>number2;
    
    car=number1&number2;//finding carry
    number1=number1^number2;//stores the carry on number 1
    number2=car<<1;//left shifts carry by 1 
    
    //as biggest number that can be stored in 8 bit is 3 digits so we repeat this 3 times
    car=number1&number2;
    number1=number1^number2;
    number2=car<<1;
    
    car=number1&number2;
    number1=number1^number2;
    number2=car<<1;
    
    //taking sum of the two numbers
    sum=number1^number2;
    cout<<"Sum is: "<<sum<<endl;
    
     return 0;
}
