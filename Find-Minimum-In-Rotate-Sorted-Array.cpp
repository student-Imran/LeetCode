#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    int findMin(vector<int>& nums) {
        int len = nums.size();
        int l=0,r=len-1;
        int ans = INT_MAX;
        while(l<=r){
            int mid = (l+r)/2;
            // cout<<l<<" "<<r<<" "<<mid<<'\n';
            if(nums[mid]>=nums[l]){
                ans = min(ans,nums[l]);
                l=mid+1;
                
            }
            else{
                ans = min(ans,nums[mid]);
                r=mid-1;
            }
        }
        return ans;
    }
};
void solve()
{
    vector<int>nums;
    int x;
    while(cin>>x){
        nums.push_back(x);
    }
    Solution sol;
    cout<<sol.findMin(nums)<<'\n';
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