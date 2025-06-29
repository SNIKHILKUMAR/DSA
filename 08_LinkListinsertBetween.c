// worst case (time complexity)=  O(n)

// LL insert between



#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
};
//traversal
void insertList(struct node * ptr){
    while(ptr != NULL){
        printf("element %d \n",ptr->data);
        ptr=ptr->next;
    }
}

// makking new node  
struct node * insertAtBetween(struct node * head, int data,int index){
    struct node * ptr = (struct node * )malloc(sizeof(struct node ));
    struct node * p= head;
    int i=0;
    while(i != index-1){
        p= p->next;
        i++;


    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;




}



int main(){
    struct node * head;
    struct node * second;
    struct node * third;

    head= (struct node*)malloc(sizeof(struct node ));
    second = (struct node*)malloc(sizeof(struct node ));
    third= (struct node*)malloc(sizeof(struct node ));

    head->data=66;
    head->next=second;

    second->data=77;
    second->next=third;

    third->data=88;
    third->next=NULL;

    insertList(head);
    printf("\n");
    head=insertAtBetween(head,56,1);
    insertList(head);




    return 0;

}