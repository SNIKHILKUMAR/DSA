#include<stdio.h>


int linearSearch(int arr[],int size,int element){
    for (int  i = 0; i <size; i++)
    {
       if(arr[i]==element)
       return i;
    }
    return -1;
    

}

int main()
{
    int arr[]={13,646,1,78,45,456,25};
    int size=sizeof(arr)/sizeof(int);
    int element=78;
    int searchingElement=linearSearch(arr,size,element);
    printf("the element %d in the index of %d",element,searchingElement);
    return 0;
}
