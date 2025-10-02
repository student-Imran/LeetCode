#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        int count=1;
        vector<int>nowRow;
        for(int i=0;i<numRows;i++){
            vector<int>pre_row;
            for(int j=0;j<=i;j++){
                if(j==0 or j==i){
                    pre_row.push_back(1);
                }else{
                    pre_row.push_back(nowRow[j]+nowRow[j-1]);
                }
            }
            nowRow.clear();
            ans.push_back(pre_row);
            for(auto x:pre_row){
                nowRow.push_back(x);
            }
        }
        return ans;
    }
};
void solve()
{
    Solution sol;
    int n;
    cin>>n;

    sol.generate(n);
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