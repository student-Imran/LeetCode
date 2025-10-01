#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0,r=arr.size()-1;
         int ans=-1;
        while(l<=r){
            int mid = (l+r)/2;
           
            int miss_numbers = (arr[mid]-1)-mid;
            if(miss_numbers>=k){
                r=mid-1;
                ans=mid;
            }
            else{
                l=mid+1;
            }
        }
        if(ans==-1){
           return (arr.size())+k;
        }
        return ans+k;
    }
};
void solve()
{
    vector<int>nums;
    int x;
    int k;
    while(cin>>x){
        nums.push_back(x);
        if(cin.peek()=='\n') break;
    }
    cin>>k;
    Solution sol;
    cout<<sol.findKthPositive(nums,k)<<'\n';
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