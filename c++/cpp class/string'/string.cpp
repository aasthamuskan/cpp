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
        cout<<"pasword is invalid"<<endl;
    }
    string ss="helllo";
    cout<<ss.insert(2,"class")<<endl;
    cout<<ss.insert(2,3,"*")<<endl;
    cout<<ss.replace(1,2,"world",2,3);


}