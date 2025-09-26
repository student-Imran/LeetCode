#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>u_map;
        for(int i=0;i<nums.size();i++){
            u_map[nums[i]] = i;
        }
        for(int i=0;i<nums.size();i++){
            int req = target - nums[i];
            if(u_map[req] and nums[i]!=req){
                 cout<<u_map[nums[i]]<<" "<<u_map[req]<<'\n';
                return {u_map[nums[i]],u_map[req]};
            }
           else if(u_map[req]>0 and req==nums[i]){
                if(count(nums.begin(),nums.end(),nums[i])>1){
                    return {u_map[nums[i]],i};
                }
                
                
            }
            
        }
        return {};
        

    }
};
void solve()
{
    int n;cin>>n;
    vector<int>nums;
    for (int i = 0; i < n; ++i)
    {
        int x;cin>>x;
        nums.push_back(x);
    }
    int target;
    cin>>target;
    Solution sol;
   sol.twoSum(nums,target) ;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;

}

