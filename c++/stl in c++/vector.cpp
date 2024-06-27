#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int>a(5,1);
    vector<int>last(a);
       cout<<"print a"<<endl;
       for(int i:a){
        cout<<i;
       }

    cout<<"Capacity"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity"<<v.capacity()<<endl;

    cout<<"size"<<v.size()<<v.size()<<endl;
    cout<<"element at 2nd index"<<v.at(2)<<endl;
    cout<<"front element"<<v.front()<<endl;
    cout<<"back element"<<v.back()<<endl;
    cout<<"before pop"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        }
        cout<<endl;
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        }
    cout<<"before clear size"<<v.size()<<endl;
    v.clear();
    cout<<"after clear size"<<v.size()<<endl;
    return 0;

}