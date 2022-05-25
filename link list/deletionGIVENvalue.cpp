#include<iostream> 
using namespace std;
 typedef struct node{
    int data;
    struct node * next;

}nd;

void display(nd*head){
    while(head!=NULL){
        cout<<"elements r: "<<head->data <<endl;
        head=head->next;
    }
}

nd*gvn(nd*head,int value){

    nd*p=head;
    nd*q=p->next;
    while(q->data!=value&&q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
}
int main(){
nd*head;
nd*second;
nd*third;
nd*fourth;

head=(nd*)malloc(sizeof(nd));
second=(nd*)malloc(sizeof(nd));
third=(nd*)malloc(sizeof(nd));
fourth=(nd*)malloc(sizeof(nd));

head->data=7;
head->next=second;
second->data=8;
second->next=third;
third->data=5;
third->next=fourth;
fourth->data=9;
fourth->next=NULL;
cout<<"before deletion" <<endl;
display(head);
cout<<"after deletion"<<endl;

head=gvn(head, 5);
display(head);
return 0;
}