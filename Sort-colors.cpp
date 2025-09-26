#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int index,zero,one,two;
        one = two = zero = index = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if(nums[i]==0){
                zero++;
            }
            else if(nums[i]==1){
                one++;
            }
            else{
                two++;
            }
        }
        while(zero--){
            nums[index++] = 0;
        }
        while(one--){
            nums[index++] = 1;
        }
        while(two--){
            nums[index++] = 2;
        }
        
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
   sol.sortColors(nums) ;
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

