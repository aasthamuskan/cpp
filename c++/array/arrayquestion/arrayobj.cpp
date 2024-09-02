#include<iostream>
using namespace std;
class xyz{
    int a,b;
    public:
    void getdata(){
        cout<<"Enter the value of a and b"<<endl;
        cin>>a>>b;
    }
    void putdata(){
        cout<<"The value of a is "<<a<<endl;

    }
}
int main(){
    xyz aa[5];
    int i;
    for(i=0;i<5;i++){
        aa[i].getdata();
    }
    getch();
        return 0;
}