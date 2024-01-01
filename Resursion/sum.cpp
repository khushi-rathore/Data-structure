#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int multiply(int b , int c){
    return b*c;
}
int main(){
    int num1,num2,add, mul;
    cout<<"Enter two numbers";
    cin>>num1>>num2;
    add=sum(num1,num2);
    mul=multiply(num1,num2);

    cout<<"sum of "<<num1<<" and "<<num2<<" is : "<<add<<endl;
    cout<<"multiplication of "<<num1<<" and "<<num2<<" is : "<<mul<<endl;

    
    return 0;
}