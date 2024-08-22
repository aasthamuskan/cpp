//count the elements found outside the range
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0<i<n;i++){
        cin>>array[i];

    }
    int lower_limit ,upper_limit;
    cin>>lower_limit>>upper_limit;
    int outside_range_count=0;
    for(int i =0;i<n;i++){
        if(array[i]<lower_limit  array[i]>>upper_limit){
            outside_range_count++;
        }
    }
    cout<<outside_range_count;
    return 0;
}