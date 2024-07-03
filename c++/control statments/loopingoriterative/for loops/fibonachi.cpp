#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin >> n; 
    int i=0;
    int j=1;

    for(i=1;i<=n;i++){
        int nextno=i+j;
         cout<<"next no"<<nextno;
         i=j;
         j=nextno;
   }
}