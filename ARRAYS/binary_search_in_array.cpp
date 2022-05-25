#include<iostream> 
using namespace std;
void display(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i] <<endl;
    }
}
int binarysrch(int arr[],int n, int elmnt){
    int low,mid,high;
    low=0;
    high=n-1;
    //keep searching untill low<=high
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==elmnt){
            return mid; //if searched ,return index no;
        }
        if(arr[mid]<elmnt){
            low=mid+1;
        }
        else{
        high=mid-1;
        }
    }//searching end
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
int n=sizeof(arr)/sizeof(int), elemnt;
cout<<"the elemnts r"<<endl;
display(arr,n);
cout<<"enter an element btwn this to search"<<endl;
cin>>elemnt;
binarysrch(arr,n,elemnt);
int searchedelemnt=binarysrch(arr,n,elemnt);
cout<<"the element "<<elemnt <<" was found in index no "<<searchedelemnt <<endl;


return 0;
}