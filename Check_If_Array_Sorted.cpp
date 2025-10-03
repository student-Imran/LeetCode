#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        return count <= 1; 
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
    
    cout << sol.check(nums) << '\n';
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