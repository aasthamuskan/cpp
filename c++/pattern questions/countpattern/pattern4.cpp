#include<iostream>
using namespace std;
int main(){
    int i,j,noofrow,noofcoloumn;

    cin>>noofrow;
    for(int i=1;i<=noofrow;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
            }
            cout<<endl;
    }
return 0;

}