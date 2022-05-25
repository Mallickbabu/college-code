#include<iostream> 
using namespace std;
struct stack{
    int size;
    int top;
    char*arr;
};

void push(struct stack *s, char val) {
    if(s->top==s->size){
        cout<<"the stack is full."<<endl;
    }else{
        s->top++;
        s->arr[s->top]=val;
    }
}
 void pop(struct stack*s){
     if(s->top== -1){
         cout<<"the stack is empty."<<endl;

     }
     else{
         //cout<<"the poped element is "<<s->arr[s->top] <<endl;
         s->top --;
     }
 }   
void display(struct stack *s){
    for(int i=s->top;i>=0;i--){
        cout<<s->arr[i]<<endl;
    }
}

int parenmatch(char* exp){
    struct stack *sp ;
sp->size=100;
sp->top=-1;
sp->arr=(char*)malloc(sp->size*sizeof(char));

for(int i=0;exp[i]!='\0';i++){
    if(exp[i]=='('){
        push(sp,'(');

    }
    else if(exp[i]==')'){

        pop(sp);
        cout<<"parenthisis are matching"<<endl;

    }
    
}
}
int main(){
char* exp="8*(9+2)+9)";
parenmatch(exp);



return 0;
}