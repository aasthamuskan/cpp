//algorithm step1 start
//step2 input elemenet and value that has to serched
//step 3 set flag =0
//step4 loop from 0 to n-1:
//            if arr[i]==key
//            pos=i+1;
//            flag=1;
// step 5 if flag ==1;
//             found
//             else 
//             not found      

#include<iostream>
using namespace std;

int main(){
    int a[10],i,key;
    for(i=0;i<10;i++){
        cout<<"enter the elements";
        cin>>a[i];
    }
    cout<<"enter the no you wanted to serhch";
    cin>>key;
    int flag=0;
    int pos;
    for(int i=0;i<10;i++){
        if(a[i]==key){
            flag=1;
            pos=i+1;
            break;
        }
    }
    if(flag==0){
        cout<<"element not found";
    }
    else{
        cout<<"element found";
    }
    return 0;
}