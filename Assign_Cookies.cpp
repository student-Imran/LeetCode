#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       sort(s.begin(),s.end());
       sort(g.begin(),g.end());
       int ans =0;
       for(int i=0;i<g.size();i++){
        auto it = lower_bound(s.begin(),s.end(),g[i]);
        if(it!=s.end()){
            ans++;
            s.erase(it);
        }
        else{
            break;
        }
       }
       return ans;
    }
};
void solve() {
    Solution sol;
    vector<int>g,s;
    int x;
    while(cin >> x) {
        g.push_back(x);
        if(cin.peek() == '\n') break; 
    }
    while(cin >> x) {
        s.push_back(x);
        if(cin.peek() == '\n') break; 
    }
    cout << sol.findContentChildren(g,s) << '\n';
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