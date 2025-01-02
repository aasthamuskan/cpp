#include<bits/stdc++.h>
using namespace std;
class academics{
protected:
int m1;
void getm1(){
    cout<<"\nenter the academic score: ";
    cin>>m1;
}
};
class sports{
    protected:
    int m2;
    void getm2(){
    cout<<"\nenter the sports score: ";
    cin>>m2;
    }
};
class score:public academics,public sports{
    int a;
};