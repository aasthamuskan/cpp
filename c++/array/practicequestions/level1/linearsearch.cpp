#include<bits/stdc++.h>
using namespace std;
class Solution {  
    public:
    bool searchInSorted(vector<int> arr, int k) {
    
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                return true;
            }
        }
        return false;
    }
    
};
int main(){
    Solution s;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<s.searchInSorted(arr,k);
    return 0;
}