#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        int ans = -1;
        bool ok=false;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==target){
                ans = mid;
                ok=true;
                break;
            }
            if(nums[mid]<target){
                l=mid+1;
                ans = mid;
            }
            else{
               r = mid -1;
            }
        }
        if(ok){
            return ans;
        }
        else{
            return (ans+1);
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

    cout<<sol.searchInsert(nums,n)<<'\n';
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