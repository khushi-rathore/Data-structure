#include<iostream>
using namespace std;
int main(){

  int n;
  cin>>n;
  int sum=0;
  // for(int i=0;i<=n;i+=2){
  //   sum+=i;
  // }
  int i=0;
  while(i<=n){
    sum+=i;
    i+=2;
  }
  cout<<"sum of even number is : "<<sum<<endl;
  return 0;
}