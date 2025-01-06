#include<bits/stdc++.h>
using namespace std;
cass Solution {
  public:
    
    vector<int> findUnion(vector<int> &a, vector<int> &b){  
    int n1 = a.size();
        int n2 = b.size();
        
        set<int> st;
        
        for(int i=0; i<n1; i++){
            st.insert(a[i]);
        }
        for(int i=0; i<n2; i++){
            st.insert(b[i]);
        }
        
        vector<int> arr;
        for(auto it: st){
            arr.push_back(it);
        }
        
        return arr;
    }
};
int main(){
    int n1, n2;
    cin>>n1>>n2;
    vector<int> a(n1), b(n2);
    for(int i=0; i<n1; i++){
        cin>>a[i];
    }
    for(int i=0; i<n2; i++){
        cin>>b[i];
    }
    Solution obj;
    vector<int> ans = obj.findUnion(a, b);
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}


