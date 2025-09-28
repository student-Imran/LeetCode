#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        vector<int>ans(2);
        bool ok = false;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==target){
                r=mid-1;
                ok=true;
            }
            else if(nums[mid]<target){
                l=mid+1;
                ans[0]=mid+1;
            }
            else if(nums[mid]>target){
               r = mid -1;
            }
        }
        if(ok){
            l = 0;
        r = nums.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==target){
                l=mid+1;
                ans[1]=mid;
            }
            else if(nums[mid]<target){
                l=mid+1;
                
            }
            else if(nums[mid]>target){
               r = mid -1;
               ans[1]=mid-1;
            }
        }
        return (ans);
    }
    else{
        ans[0]=-1;
        ans[1]=-1;
        return ans;
    }
   
}
        
};
void solve()
{
    vector<int>nums;
    int x;
    while(cin>>x){
        nums.push_back(x);
        if(cin.peek()=='\n') break;
    }
    Solution sol;
    int n;
    cin>>n;
    sol.searchRange(nums,n);
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