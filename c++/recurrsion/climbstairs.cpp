#include<iostream>
using namespace std;
int climbstairs(long long stairs){
    //base case{
    if(stairs<0){
        return 0;
}
if(stairs==0){
    return 1;
    }
    //recurence relation
    return climbstairs(stairs-1)+climbstairs(stairs-2);
}
int main(){
    long long stairs;
    cin>>stairs;
    cout<<climbstairs(stairs);
    return 0;
}