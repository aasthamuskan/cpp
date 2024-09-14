//fast then linear serching
//works on divide and conquor
//elements must be in shorted order
//algorithm 
//step1 start
//step2 input elemenet and value that has to serched
//step 3 i=0 j=size-1 flag =0
//step4 loop while i<=j

//            mid=(i+j)/2
//   cond1        if a[mid]==key
//            flag=1
//            set pos=i+1
//              break 
    // cond2    if a[mid]>key{
    //     j=mid-1;
    // }
    // cond 3   if a[mid]<key{
    //     i=mid+1;
    // }


// step 5 if flag ==1;
//             found
//             else 
//             not found      

#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"enter the size";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the element";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int x,flag;
    cout<<"enter the number to be serched: ";
    cin>>x;
    int i=0,j=n-1,flag=0;
    while(i<=j){
        int mid=(i+j)/2;
        if(a[mid]==x){
            flag=1;
            cout<<"element found at position "<<mid+1;
            break;
            }
            else if(a[mid]>x){
                j=mid-1;
            }
            else{
                i=mid+1;
                }
                }


}