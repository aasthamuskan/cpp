#include<iostream>
using namespace std;
class vhe{
public:
vhe(int w){
cout<<"vehicle constructor called!\n";
cout<<"number of wheels: "<<w<<endl;
}
};
class car:public vhe{
    int m;
    public:
    
};
int main(){
    result ob(1,100);
    ob.showroll();
    ob.showmarks();
    
}