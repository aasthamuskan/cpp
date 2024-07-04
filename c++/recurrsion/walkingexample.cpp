#include<iostream>
using namespace std;
void reachhome(int src,int dest){
     cout << "source " << src  << " destination " << dest << endl;
    //base case
        if(src==dest){
            cout<<"You are at home"<<endl;
            return ;
        }
        src++;
        reachhome(src,dest);

}
int main(){
    int src,dest;
    cout<<"Enter the source"<<endl;
    cin>>src;
    cout<<"Enter the destination"<<endl;
    cin>>dest;
    reachhome(src,dest);
    return 0;
}