#include<iostream>
using namespace std;
int main(){
    int i;
    i=1;
    while (i<=5){
        cout<<endl<<i;
        if(i==30)
        continue;
        i++;
    }
    return 0;
}