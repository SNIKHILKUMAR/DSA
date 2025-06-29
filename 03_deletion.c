#include<stdio.h>

void display(int arr[],int n){
    for (int  i = 0; i <n; i++)
    {
       printf("%d ",arr[i]);
    }
    
    printf("\n");

}

void  deletion(int arr[],int index,int size){
   
    for (int  i = index; i <size-1; i++)
    {
       arr[i]=arr[i+1];

    }
}

int main()
{
    int arr[100]={1,3,45,65,76};
    int size=5,index=2,delete=45;

    display(arr,size);
    deletion(arr,index,size);

    size -= 1;
    display(arr,size);

    return 0;
}
