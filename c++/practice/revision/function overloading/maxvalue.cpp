#include<iostream>
using namespace std;
int maxvalue(int a,int b){

    if(a>b){
        return a;
    }else{
        return b;
    }
}
double minvalue(double c,double d){
   
    if(c<d){
        return c;
    }else{
        return d;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    double c,d;
    cin>>c>>d;
    int maximumvalue=maxvalue(a,b);
    double minimumvalue = minvalue(a,b);
    cout<<"the maximum value is: "<<maximumvalue<<endl;
    cout<<"the minimum value is: "<<minimumvalue<<endl;
    return 0;
}