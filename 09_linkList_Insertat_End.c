// worst case (time complexity)=  O(n)
// ll insert at end



#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;

};

void display( struct node * ptr ){
    while(ptr!=NULL){
        printf("element %d \n",ptr->data);
        ptr=ptr->next;
    }
}

struct node * insertAtEnd(struct node * head,int element){
    struct node * ptr=(struct node *)malloc(sizeof(struct node ));
   
    struct node *p =head;
    ptr->data=element;

    while(p->next!=NULL){
        p=p->next;

    }
    p->next=ptr;
    ptr->next=NULL;
    return head;


}



 int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * forth;

    head=(struct node*)malloc(sizeof(struct node ));
    second =(struct node*)malloc(sizeof(struct node ));
    third=(struct node*)malloc(sizeof(struct node ));
    forth=(struct node*)malloc(sizeof(struct node ));

    head->data=4;
    head->next=second;

    second->data=55;
    second->next=third;

    third->data=66;
    third->next=forth;

    forth->data=77;
    forth->next=NULL;

printf("before\n");
display(head);

head=insertAtEnd(head,51);
printf("after \n");
display(head);




    return 0;

 }