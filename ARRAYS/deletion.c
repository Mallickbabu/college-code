#include<stdio.h> 

void display(int arr[], int n){
    //Traversal
    for(int i=0;i<n;i++){

            printf("%d \n",arr[i]);
            }
    }
void indexdeletion(int arr[], int size ,int index){
    
    
        for(int i= index; i<size-1;i++){
        arr[i]=arr[i+1];
        }
    

}
    

int main(){
int arr[100]={2,3,4,5,9};
int size=5,index=1;
display(arr,size);
indexdeletion(arr, size,index);
size-=1;
printf("after deletion\n");
display(arr,size);
return 0;