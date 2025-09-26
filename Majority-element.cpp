#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>u_map;
        for (int i = 0; i < nums.size(); ++i)
        {
            u_map[nums[i]]++;
        }
        int max_majority=-1;
        int majority_Element;
        for(auto x : u_map){
            if(x.second>max_majority){
                max_majority = x.second;
                majority_Element = x.first;
            }
        }
        return majority_Element;
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
    Solution sol;
   cout<< sol.majorityElement(nums) <<'\n';
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

