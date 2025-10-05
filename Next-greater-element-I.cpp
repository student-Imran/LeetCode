#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        vector<int>ans;
        for(int i=len1-1;i>=0;i--){
            int num =-1;
            for(int j=len2-1;j>=0;j--){
                if(nums1[i]==nums2[j]){

                    if(num<=nums1[i]){
                      ans.push_back(-1);
                      num=nums1[i];
                    }
                    else{
                        ans.push_back(num);
                        num=max(num,nums2[j]);
                    }
                    break;
                }
                else{
                    if(nums2[j]>nums1[i]){
                        num=nums2[j];
                    }
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
void solve() {
    Solution sol;
    vector<int> nums1,nums2;
    int x;
    while(cin >> x) {
        nums1.push_back(x);
        if(cin.peek() == '\n') break; 
    }
    int k;
    while(cin>>k){
        nums2.push_back(k);
        if(cin.peek()=='\n') break;
    }
    sol.nextGreaterElement(nums1,nums2);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  int t=1;
  // cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;

}