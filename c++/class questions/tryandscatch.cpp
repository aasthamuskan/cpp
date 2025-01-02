#include<bits/stdc++.h>
using namespace std;
int main(){
string pass;
cout<<"enter the password: ";
cin>>pass;
try{
    if(pass.length()<8){
        throw 1;   
    }
    else if(!isdigit(pass[0])){
        throw 'p';
    } 
;
}
catch(int x){
    cout<<"length should be alteast 8";
}
catch(char x){
    cout<<"first charafcter should be digit";
}

}