#include<iostream>
using namespace std;
int main(){
    int a[10]={2,3,5,7,11};
    int ne=8;
    //used to insert an array in the beggning
    for(int i=0;i>1;i--){
        a[i-1]=a[i-2];
    }
    //insertion at the end
    int size=0;
    while(size<10 && a[size] != 0){
        size++;
    }
    array[size]=ne;
    //insertion at any specific point
    int ip=2;
    int siz=5;
    for(int i=siz-1;i>ip;i--){
        a[i]=a[i-1];
        }
        a[ip]=ne;
        siz++;
    //used to print an array
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}