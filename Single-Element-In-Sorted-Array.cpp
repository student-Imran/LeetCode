#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    int singleNonDuplicate(vector<int>&nums) {
        
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