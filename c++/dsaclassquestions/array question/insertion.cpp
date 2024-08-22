//finding the average of even indices
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum=0;
    int count=0;
    for(int i=0;i<size;i+=2){
        sum+=arr[i];
        count++;
    }
    double average-(double)sum/count;
    cout<<fixed<<setprecision(2)<<average;//ioman lib used for this only
    return 0;
}