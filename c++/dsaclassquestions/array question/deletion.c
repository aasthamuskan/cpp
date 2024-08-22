#include<stdio.h>
int main(){
    int arr[100]={1,2,3,4,6,8,10};//initial array
    int size=7;//current size of array
    int pd=2;//positionto delete
//shiftinh elemnet to make space for new elemnt
    for(int i=pd;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    
    size--;//updation to new array
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}