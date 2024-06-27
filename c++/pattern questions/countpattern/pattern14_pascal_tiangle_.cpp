#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int s = 1; s <= n-i; s++)
        {
            cout << " ";
        }
        int c=1;
        for (int j = 1; j <= i; j++){
            cout << c << " ";
            c = c *(i-j)/j;
        }
        cout << endl;
        
    }
}