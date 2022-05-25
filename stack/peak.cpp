#include<iostream> 
using namespace std;

struct stack{
    int size;
    int top;
    int*arr;
};

void push(struct stack s , int val){
    if(s.top == s.size-1){
        cout<<"the stack is full";

    }
    else{
        s.top++;
        s.arr[s.top]=val;

    }
}

void pop(struct stack s){
    if(s.top ==-1){
        cout<<"the stack is empty";
    }
    else{
        cout<<"the poped element is : "<<s.arr[s.top];
        s.top--;
    }
}

void display(struct stack s){
    for(int i=s.top;i>=0;i--){
        cout<<"the elemnts are: "<<s.arr[i]<<endl;
    }

}

void menu(){
    cout<<"what do you want to do??"<<endl;
    cout<<"1. push"<<endl;
    cout<<"2.pop"<<endl;
    cout<<"3.display"<<endl;
    cout<<"4.exit"<<endl;
}

void list(struct stack s){
    int ch , val;
    cout<<"enter the choice"<<endl;
 do{  
    switch(ch){
        case 1:{
            cout<<"enter the value to be pushed"<<endl;
            cin>>val;
            push(s,val);
            menu();
            break;
        }
        case 2:{
            pop(s);
            menu();
            break;
        }
        case 3:{
            display(s);
            break;
        }
        case 4:{
            cout<<"thank you"<<endl;
            break;
        }
    }
 }while(ch!=4);
}
int main(){
    cout<<"enter the size of stack"<<endl;
    int n;
    cin>>n;
    struct stack s;
    s.size=n;
    s.top=-1;
    s.arr=(int*)malloc(s.size*sizeof(int));
    cout<<"stack hasbeen succesfully created"<<endl;
    menu();
    list(s);

return 0;
}