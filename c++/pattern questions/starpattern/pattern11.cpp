#include<iostream>
using namespace std;
int main(){
    int inspace =1,n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }
        int totalcol = i != n?2:2*n-1;
        if(i==1){
            totalcol = i;

        }
        for(int j=1;j<=totalcol;j++){
            cout<<"*";
            if(i>=2 && i!= n){
                for(int s = 1; s<= inspace ; s++){  
                    cout<<" ";
                          }
                          inspace+=1;
        }

    }
    cout<<endl;
}
}