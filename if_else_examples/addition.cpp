#include<iostream>
using namespace std;
int main(){
    char op;
    int a , b;
    cout<<"enter 1st number";
    cin>>a;
    cout<<"enter 2nd number";
    cin>>b;
    cout<<"enter operation";
    cin>>op;
    

    if(op=='+'){
        cout<<a+b;
    }
    else if(op=='-')
    {
        cout<<a-b;
    }
return 0;
}