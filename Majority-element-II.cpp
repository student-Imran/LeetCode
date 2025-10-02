#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    vector<int> majorityElement(vector<int>&nums) {
        map<int,int>ma;
        int len = nums.size();
        int nByThree = len/3;
        vector<int>ans;
        // cout<<len<<'\n';
        for(int i=0;i<nums.size();i++){
             ma[nums[i]]++;
             int x = ma[nums[i]];
             // cout<<x<<" ";
             if(x>nByThree){
               ans.push_back(nums[i]);
             }
        }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};
void solve()
{
    Solution sol;
    vector<int>nums;
    int x;
    while(cin>>x){
        nums.push_back(x);
        if(cin.peek()=='\n') break;
    }
    sol.majorityElement(nums);
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