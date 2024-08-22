#include<iostream>
using namespace std;
enum months{
    January=1,feburary,march,april,may,june ,july ,august,september,october ,november,december
};
int main(){
    months m;
    cin>>m;
    cout <<"months is"<<months(m);
}