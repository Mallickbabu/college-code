#include<stdio.h> 
#include<stdlib.h> 

struct myarray{
    int totalsize;
    int usedsize;
    int *ptr ;
};
void creatarray (struct myarray *a ,int tsize , int usize){
    a->totalsize=tsize;
    a->usedsize=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
}
void show (struct myarray *a){
    for(int i=0;i< a->usedsize;i++){
        printf("%d \n",(a->ptr)[i]);

    }
    

}
void setval( struct myarray *a){
     int n;
     for(int i=0;i< a->usedsize;i++){
        printf("enter the elements%d:  ",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;

    }

}




int main(){
    struct myarray marks;
    creatarray(&marks,10,2);
    setval(&marks);
    show(&marks);
    

return 0;
}