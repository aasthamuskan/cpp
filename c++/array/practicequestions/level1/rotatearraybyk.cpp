#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
     void rotate(int[] nums, int k) {
        int n = nums.length;
        if(n == 1) {
            return;
        }

        int[] copy = Arrays.copyOf(nums, n);
        for(int i = 0; i < n; i++) {
            nums[getNewIndex(i, k, n)] = copy[i];
        }
    }
    
    private int getNewIndex(int i, int k, int n) {
        int fakeIndex = i+k;
        int outOfBounds = fakeIndex/n;

        return fakeIndex - (n * outOfBounds);        
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    s.rotate(arr,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}