#include<iostream>
using namespace std;
int main(){
    int i,j,noofrow,noofcoloumn;

    cin>>noofrow;
    cin>>noofcoloumn;
    for(int i=1;i<=noofrow;i++){
        for(int j=noofrow;j>=i;j--){
            cout<<"*";
            }
            cout<<endl;
    }
return 0;

}
