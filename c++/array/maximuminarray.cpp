#include<iostream>
using namespace std;
int getmx(int num[],int n){
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
            }
            }
            return max;
            
}
int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
        }
        cout<<"Maximum value is: "<<getmx(num,size);
        return 0;
}