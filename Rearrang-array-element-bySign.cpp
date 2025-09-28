#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(auto x:nums){
            if(x<0){
                neg.push_back(x);
            }
            else{
                pos.push_back(x);
            }
        }
        int index = 0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=pos[index];
            }else{
                nums[i]=neg[index++];
            }
        }
        return nums;

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
    sol.rearrangeArray(nums);
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