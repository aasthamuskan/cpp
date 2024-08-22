#include<stdio.h>
int main(){
    int arr[100]={1,2,3,4,6,8,10};//initial array
    int size=7;//current size of array
    int np=2;//where u want to insert the new element
    int ne=9;//elemnt to be insertrd
//shiftinh elemnet to make space for new elemnt
    for(int i=size-1;i>=np;i--)
    {
        arr[i+1]=arr[i];
    }
    //inser
    arr[np]=ne;
    size++;
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}