#include<stdio.h>

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}

int indInsertion(int arr[],int element,int index,int size,int capacity){  //bhai ye bilkul series me likne ha jo niche likhe ha 
    
     if(size>=capacity){
        return -1;
     }
    
    for (int  i = size-1; i >=index; i--)
    {
       arr[i+1]=arr[i];
    }
    arr[index]= element;
    return 1;

}

int main(){
    int arr[100]={1,2,21,34,78};
    int index=0,element=45,size=5;
    display(arr,size);

    indInsertion(arr,element,index,size,100);   //ye vala aur uper vala dono value match hongi 
    size +=1;
    display(arr,size);

    return 0;

}