#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"Size of arry is : "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[ i]<<" ";
        

    }
    cout<<endl;

}
bool linearSearch( int arr[],int size,int k){
    // base condition
    print(arr,size);
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingpart=linearSearch(arr+1,size-1,k);
        

    }

}
int main(){
    int arr[5]={1,2,5,67,9};
    int size=5;
    int k=5;
    bool ans=linearSearch(arr,size,k);
    if(ans){
        cout<<"Present";

    }
    else{
        cout<<"Absent";
    }
    return 0;
}