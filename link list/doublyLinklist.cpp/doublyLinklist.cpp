#include<iostream> 
using namespace std;

typedef struct node{
    int data;
    struct node*next;
    struct node*prev;
}nd;

void display (nd* head){
    nd*ptr;
    ptr=head;
    while(ptr!=NULL){
        cout<<"elemnts: "<<ptr->data <<endl;
        ptr=ptr->next;
    }

}
int main(){
nd*head;
nd*fst;
nd*scnd;
nd*thrd;
nd*frth;

head= (nd*)malloc(sizeof(nd));
fst= (nd*)malloc(sizeof(nd));
scnd= (nd*)malloc(sizeof(nd));
thrd= (nd*)malloc(sizeof(nd));
frth= (nd*)malloc(sizeof(nd));

head->data=7;
head->next=fst;
head->prev=NULL;
fst->data=5;
fst->next=scnd;
fst->prev=head;
scnd->data=8;
scnd->next=thrd;
scnd->prev=fst;
thrd->data=9;
thrd->next=frth;
thrd->prev=scnd;
frth->data=10;
frth->next=NULL;
frth->prev=thrd;

display(head);

return 0;
}