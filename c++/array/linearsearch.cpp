#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
     for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }

     }
     return 0;
}
int main(){
    int arr[10]={5,6,4,-8,9,4,9,7,-5,22};
    cout<<"enter the element to search for "<<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"element found"<<endl;
        }
        else{
            cout<<"element not found"<<endl;
            }
            return 0;
    
}