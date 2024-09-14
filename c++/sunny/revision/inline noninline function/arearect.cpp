#include<iostream>
#include<string>
using namespace std;
inline int area(int l,int y){
    return l * y;
}
int perimeter(int l,int y){
    return 2 * (l+y);

}
//inline or non inline me diffrennce kya aa rha yaha samjh hi nahi aa raha
int main(){
    int l,y;
    cout<<"enter the length: ";
    cin>>l;
    cout<<"enter the height: ";
    cin>>y;
    cout<<"area of rectangle is: "<<area(l,y)<<endl;
    cout<<"perimeter of rectangle is: "<<perimeter(l,y)<<endl;
}