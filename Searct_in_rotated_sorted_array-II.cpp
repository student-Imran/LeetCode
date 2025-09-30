#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    bool search(vector<int>&nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) return true;
        if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
            low = low + 1;
            high = high - 1;
            continue;
        }

        if (nums[low] <= nums[mid]) {
            if (nums[low] <= target && target <= nums[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        else {
            if (nums[mid] <= target && target <= nums[high]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    }
    return false;
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
    cout<<sol.search(nums,n)<<'\n';
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