#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"Not Prime for "<<i<<endl;
    }
   else{
     cout<<"Prime for : "<< i<<endl;
   }
}
return 0;
}