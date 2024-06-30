#include<iostream>
using namespace std;
//for finding elements in column
bool ispresent(int arr[][3],int target,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
                }
                }
                }
                return 0;
}
//for row wise sum;
void printsum(int arr[][3],int target,int row,int col){
    cout<<"printing sum"<<endl;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";

    }
    cout<<endl;
}

//for the summationoflargestrow
int largestrowsum(int arr[][3],int target,int row,int col){
    int max=INT16_MIN;
    int rowindex=-1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
            }
            if(sum>max){
                max=sum;
                rowindex=i;
                }
                }
                return rowindex;


}
int main(){
    int arr[3][3];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
            }
            }
            int target;
            cout<<"enter the target"<<endl;
            cin>>target;
            
    cout << "Printing the array " << endl;
    //print 
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cout << arr[row][col] << " ";
        }
        // cout << endl;
        //    int ansIndex = largestrowsum(arr,3,3);
          // cout << "The index of the largest row is " << ansIndex << endl;
           return 0;

}
}
