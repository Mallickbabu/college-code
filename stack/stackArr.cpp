#include<iostream> 
#include<iostream> 
using namespace std;

struct stack{

    int size;
    int top ;
    int *arr;
};

int isEmpty( struct stack*ptr){
    if (ptr->top== -1){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty";
    }


}
int isFull( struct stack*ptr){
    if(ptr->top=ptr->size -1){
       cout<<"stack is full"<<endl;
    }
    else{
        cout<<"stack is not full"<<endl;;
    }


}
int main(){
   /* struct stack s;
    s.size=80;
    s.top= -1;
    s.arr= (int*)malloc(s.size * sizeof(int));*/
   
    struct stack *s;
    s->size=80;
    s->top= -1;
    s->arr= (int*)malloc(s->size * sizeof(int));

// checking the stack empty or full;
isEmpty(s);
isFull(s);
 /*if (isEmpty(s)){
     cout<<"stak is empty"<<endl;
 }
 else{
     cout<<"stack is not empty "<<endl;
 }*/

return 0;
}