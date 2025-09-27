#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long pre_sum = 0;
        map<int,int>m;
        m[0]=1;
        int ans=0;
        for(int i=0;i<nums.size();i++){
           pre_sum+=nums[i];
           long long required_sum = pre_sum - k;
           // cout<<pre_sum<<" req "<<required_sum<<'\n';
           if(m[required_sum]>0){
            ans+=m[required_sum];
           }
           m[pre_sum]+=1;

        }
       
        return(ans);
    }
};
void solve()
{
    vector<int>nums;
    int x;
    while(cin>>x){
    	nums.push_back(x);
        if (cin.peek() == '\n') break;
    }
    int s;
    cin>>s;
    // cout<<s<<'\n';
    Solution sol;
    cout<<sol.subarraySum(nums,s)<<'\n';
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