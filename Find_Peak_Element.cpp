#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        else if(nums[0]>nums[1] and nums[0]>nums[nums.size()-1]){
            return 0;
        }
        else if(nums[nums.size()-1]>nums[nums.size()-2]){
            return nums.size()-1;
        }

         
         // int initialTarget = nums[0];
        int l=1,r=nums.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            // cout<<l<<" "<<r<<" "<<mid<<'\n';
            if(nums[mid]>nums[mid-1] and nums[mid]>nums[mid+1]){
                return mid;
            }
            if(nums[mid]>nums[mid-1]){
                l = mid+1;
            }
            else{

                r = mid-1;
            }
            
        }

        return l;
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
    cout<<sol.findPeakElement(nums)<<'\n';
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