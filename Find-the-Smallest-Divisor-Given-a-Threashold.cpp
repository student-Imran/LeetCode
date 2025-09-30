#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
int result(int divisor,vector<int>&arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        int x = (arr[i])/divisor;
        if(x==0){
            ans++;
        }
        else{
            if(arr[i]%divisor==0){
                ans+=x;
            }
            else{
                ans+=x;
                ans++;
            }
        }
    // cout<<divisor<<" "<<arr[i]<<" "<<x<<" "<<ans<<'\n';
    }
    return ans;
}
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end());
        int len = nums.size();
        int l =1,r=nums[len-1];
        int final_ans = 0;
        while(l<=r){
            int mid = (l+r)/2;
            int sum = result(mid,nums);
            // cout<<l<<" "<<r<<" "<<mid<<" "<<sum<<'\n';
            // cout<<nums[mid]<<" "<<sum<<'\n';
            if(sum>threshold){
                l = mid +1;
            }
            else if(sum<=threshold){
                final_ans = mid;
                r=mid-1;

            }
            
        }
        return final_ans;
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
    int th;cin>>th;
    Solution sol;
    cout<<sol.smallestDivisor(nums,th)<<'\n';
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