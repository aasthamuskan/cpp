#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n;i++){
        int c = i>n?2*n-i:i;
        int sp=n-c;

        for (int s = 0; s < sp; s++)
        {
            cout << " ";
        }
        for(int j=c;j>=1;j--){
            cout << j << " ";
        }
        for(int j=2;j<=c;j++){
            cout << j << " ";
            }
        
        cout << endl;
        
    }
}