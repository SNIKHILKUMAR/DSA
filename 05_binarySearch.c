#include<stdio.h>

int binarySearch(int arr[],int size, int element){
    int low,mid,high;

    low=0;
    high=size-1;

    while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==element ){
        return mid;
    }
    if(arr[mid]<element){
        low=mid+1;

    }else{
        high=mid-1;

    }
    }
    return -1;

}


int main()
{
    int arr[]={11,22,33,44,55,66,77,88,99};
    int size= sizeof(arr)/sizeof(int);
    int element=66;

    int searchElement=binarySearch(arr,size,element);
    printf("the element %d in the index of %d",element,searchElement);
    return 0;
}
