#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool nxt_permutation = next_permutation(nums.begin(),nums.end());
        if(nxt_permutation){
            for(int i=0;i<nums.size();i++){
                cout<<nums[i]<<" ";
            }cout<<'\n';
        }
        else{
            sort(nums.begin(),nums.end());
            for(auto x:nums){
                cout<<x<<" ";
            }cout<<'\n';
        }
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
    sol.nextPermutation(nums);
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