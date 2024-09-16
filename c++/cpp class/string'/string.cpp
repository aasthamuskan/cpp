#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the string: ";
    getline(cin,s);
    int pass=s.length();
    if(pass==12){
        cout<<"password  is valid";
    }else{
        cout<<"pasword is invalud";
    }
}