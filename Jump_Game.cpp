#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = nums.size()-2;
        int lastIndex = len+1;
        if(lastIndex==0){
            return true;
        }
        else if(nums[0]==0){
            return false;
        }
        for(int i=len;i>=0;i--){
            if(i+nums[i]>=lastIndex){
                lastIndex=i;
            }
        }
        return lastIndex==0;
    }
};
void solve() {
    Solution sol;
    vector<int> nums;
    int x;
    while(cin >> x) {
        nums.push_back(x);
        if(cin.peek() == '\n') break; 
    }
    
    cout << sol.canJump(nums) << '\n';
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