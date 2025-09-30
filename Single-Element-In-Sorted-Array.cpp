#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    int singleNonDuplicate(vector<int>&nums) {
        if(nums.size()==1 || nums[0]!=nums[1]){
            return nums[0];
        }
        else if(nums[nums.size()-1]!=nums[nums.size()-2]){
            return nums[nums.size()-1];
        }
      int l =0;
      int r = nums.size()-1;
      // cout<<count<<'\n';
      while(l<=r){
        int mid = (l+r)/2;
        // cout<<l<<" "<<mid<<" "<<r<<'\n';
        if(nums[mid]!=nums[mid-1] and nums[mid]!=nums[mid+1]){
            return nums[mid];
        }
        else if(mid%2==0){
            if(nums[mid]==nums[mid-1]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        else{
            if(nums[mid]==nums[mid-1]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
       
      }   
      return 0;
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
    cout<<sol.singleNonDuplicate(nums)<<'\n';
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