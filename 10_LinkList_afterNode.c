// dfngkjrn

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void display(struct node * ptr){
   while(ptr!=NULL){
    printf("element %d \n",ptr->data);
    ptr=ptr->next;
   }
}

struct node * insertAtNode(struct node * head, struct node * prevNode,int data){
    struct node *ptr =(struct node *)malloc(sizeof(struct node ));
    
    ptr->data=data;

    ptr->next=prevNode->next;
    prevNode->next=ptr;

    return head;




    


}


int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    forth=(struct node *)malloc(sizeof(struct node));

    head->data=44;
    head->next=second;

    second->data=55;
    second->next=third;

    third->data=66;
    third->next=forth;

    forth->data=90;
    forth->next=NULL;

    printf("before\n");

display(head);
head=insertAtNode(head,second,1);

printf("after\n");
display(head);
    


    
   

    return 0;

}