#include<iostream> 
using namespace std;
void display(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i] <<endl;
    }
}
int linearsrch(int arr[],int n, int elmnt){
    for(int i=0;i<n;i++){
        if(arr[i]==elmnt){
            return i;
        }
    }
    return -1;
}
int main(){
int arr[]={1,3,4,7,8,9};
int n=6, elemnt;
cout<<"the elemnts r"<<endl;
display(arr,n);
cout<<"enter an element btwn this to search"<<endl;
cin>>elemnt;
linearsrch(arr,n,elemnt);
int searchedelemnt=linearsrch(arr,n,elemnt);
cout<<"the element "<<elemnt <<" was found in index no "<<searchedelemnt <<endl;
int i=linearsrch(arr,n,elemnt);
if( i<=6){
    cout<<"element is found"<<endl;
}
return 0;
}