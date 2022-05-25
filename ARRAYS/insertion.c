#include<stdio.h> 

void display(int arr[], int size){
    //Traversal
    for(int i=0;i<size;i++){

            printf("%d \n",arr[i]);
            }
    }
int indexinsertion(int arr[], int size, int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    for (int i= size-1; i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;

}
    

int main(){
int arr[100]={2,3,4,5,9};
int size=5,element=45,index=3;
display(arr,size);
indexinsertion(arr, size, element,100,index);
size+=1;
printf("after inserton \n");
display(arr,size);
return 0;
}