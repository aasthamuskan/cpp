#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> a = {1,2,3,4,5};
    int size = a.size();
    cout << "Size of array: " << size << endl;
    for(int i=0;i<size;i++){
        cout << "Element at index " << i << " is: " << a[i] <<endl;
    }
    cout<<"Element at 2nd index  "<<a.at(2)<<endl;
    cout<<"Element at 3rd index  "<<a[3] <<endl;
    cout<<"empty or not"<<a.empty()<<endl;
    cout<<"first element"<<a.front()<<endl;
    cout<<"last element"<<a.back()<<endl;
    }
