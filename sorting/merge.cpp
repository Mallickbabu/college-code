#include<bits/stdc++.h> 
using namespace std;

void display(int n , int arr[]){
    for(int i;i<n;i++){
        cout<<arr[i] ;

    }
}
int main(){
int n;
cout<<"enter the size of the arr:"<<endl;
cin>>n;
int arr[n];
cout<<"enter the the elements of array"<<endl;
for(int i;i<n;i++){
    cin>>arr[i];
}
cout<<"your elements r :"<<endl;
display(n,arr);

return 0;
}