#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    cout<<endl;
     cout<<"print the first index"<<d.at(1)<<endl;
     cout<<"print the last index"<<d.back()<<endl;
     cout<<"print the first index"<<d.front()<<endl;
     cout<<"empty or not"<<d.empty()<<endl;
     cout<<"before erase"<<d.size()<<endl;
     d.erase(d.begin(),d.end());
     cout<<"after erase"<<d.size()<<endl;
     for(int i:d){
        cout<<i<<endl;
     }

}