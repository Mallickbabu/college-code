#include<iostream> 
using namespace std;
struct stack{
    int size;
    int top;
    int *arr;
};


void push(  struct stack *ptr ,int val){
    if(ptr->top==ptr->size-1){
        cout<<"the stack is full"<<endl;
    }
    else{
   
        ptr->top ++;
        ptr->arr[ptr->top]=val;
    }
    


   }
void pop( struct stack *ptr  ){
    if(ptr->top==-1){
        cout<<"the stack is empty"<<endl;
    }
    else{
        cout<<"popped eelement is"<<ptr->arr[ptr->top] <<endl;
        ptr->top --;
    }
    
}

void display(struct stack *ptr){
   for(int i=ptr->top;i>=0;i--){
        cout<<"elements are : "<<ptr->arr[i] <<endl;
    }
}

void ss(){
    cout<<" wht do u want to do ??"<<endl ;
    cout<<"1.push"<<endl;
    cout<<"2.pop"<<endl;
    cout<<"3.display"<<endl;
    cout<<"4.exit"<<endl;
}
void fun(struct stack *s){
    int ch , val;
    do{
       cout<<"enter the choice"<<endl;
       cin>>ch;

       switch(ch){
           case 1:{
               cout<<"enter the element to be pushed"<<endl;
               cin>>val;
               push(s,val);
               ss();
               break;

           }
           case 2:{
               pop(s);
               ss();
               break;
               

           }
           case 3:{
               display(s);
               ss();
               break;
               

           }
           case 4:{
               cout<<"exite"<<endl;
               cout<<"         thank you!"<<endl;
               
               break;

           }
           default:{
               cout<<"invalid choice"<<endl;
        
           }
       }
     
    }while(ch!=4);
}
int main(){
    int n;
    cout<<"enter the size of stack"<<endl;
    cin>>n;
 struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->size=n;
    s->top= -1;
    s->arr=(int*)malloc(s->size * sizeof(int));
 
 cout<<" stack has been created succesfully"<<endl;
  ss();
  fun(s);
    

    return 0;
 }