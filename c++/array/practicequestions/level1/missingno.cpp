#include<bits/stdc++.h>
using namespace std;
class Solution {
  int missingNumber(vector<int>& nums) {
    int xor1 = nums.size();
    for(int i =0; i<nums.size(); i++){
        xor1 ^= (i)^nums[i];
    }
    return xor1;
}
};
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    Solution obj;
    cout<<obj.missingNumber(a)<<endl;
    return 0;
}