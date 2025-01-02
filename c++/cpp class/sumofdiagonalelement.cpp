#include<iostream>
using namespace std;

int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int sum=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==j){
                sum=sum+a[i][j];
            }
        }
    }
    cout<<"the sum of elements are: "<<sum;
    return 0;
}

//parametrise program

#include<iostream>
using namespace std;
class account {
    int acno;
    int balance ;
    public:
    account(){
        balance=500;
        acno=1000;
    }
    account(int ac,int bal){
        acno=ac;
        balance=bal;
    }

    void display(){
        cout<<"\nthe details are:"\n";
        cout<<"account number: "<<acno<<"\n";
        cout<<"balance: "<<balance<<"\n";
    }
};
int main(){
    int amnt;
    cout<<"enter the amount to be deposited: ";
    cin>>amnt;
    
}
