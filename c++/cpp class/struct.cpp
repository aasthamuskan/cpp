#include<iostream>
using namespace std;
union student{
    int roll ;
    float marks;
};
int main(){
    student s ={1};
    cout<<s.roll<<endl;
    s.marks=8.9;
    cout<<s.marks<<endl;
    cout<<s.roll;

    cout<<"the size is:"<<sizeof(p);
    return 0;

}