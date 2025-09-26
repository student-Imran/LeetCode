#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    int maxSubArray(vector<int>&nums) {
    	long long maxSum = INT_MIN;
    	long long sum = 0;
        for(int i=0;i<nums.size();i++){
            if(sum<=0){
            	sum=nums[i];
            }
            else{
            	sum+=nums[i];
            }
            maxSum = max(sum,maxSum);
        }
        return maxSum;
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
    cout<<sol.maxSubArray(nums)<<'\n';
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