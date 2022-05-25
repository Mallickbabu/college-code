#include<iostream> 
using namespace std;
typedef struct node {
   int data;
   struct node *next; 
}nd;
void display(struct node*ptr){
    while(ptr!=NULL){

        cout<<"elemnt is: "<<ptr->data <<endl;
        ptr=ptr->next;
    }
}

struct node *insertionAtEnd(struct node*head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next= ptr;
    ptr->next=NULL;

    return head;
}
int main(){
    nd * head;
    nd * second;
    nd * third;
    head=(nd*)malloc(sizeof(nd));
    second=(nd*)malloc(sizeof(nd));
    third=(nd*)malloc(sizeof(nd));

    head->data=7;
    head->next=second;
    second->data=5;
    second->next=third;
    third->data=8;
    third->next=NULL;
    display(head);
    cout<<"after insertion at begining"<<endl;
    
    head=insertionAtEnd(head,56);
    display(head);
    

return 0;
}