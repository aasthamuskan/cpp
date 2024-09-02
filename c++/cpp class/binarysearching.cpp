#include<iostream>
#include<string>
#include<cstring>

using namespace std;
int f_c_i(string arr[],int size,string target){
    int left=0;
    int right=size-1;
    int result =-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]==target){
            result = mid;
            right = mid-1;
            
        }else if(arr[mid]<target){
            left = mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    strng countries[n];
    for(int i=0;i<n;i++){
        cin>>countries[i];

    }
    string target;
    cin>>target;
    int index f_c_i(countries,n,target);
    if(index != -1){
        cout<<countries[index]<<" is the first country to contain the string "<<target<<endl;
    }else{
        cout<<"No country contains the string "<<target<<endl;
    }
    return 0;
}