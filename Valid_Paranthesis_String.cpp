#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    bool checkValidString(string s) {
        int size = s.size();
        int min_open_br = 0;
        int max_open_br = 0;
        for(int i=0;i<size;i++){
            if(s[i]=='('){
                min_open_br++;
                max_open_br++;
            }
            else if(s[i]==')'){
                min_open_br--;
                max_open_br--;
            }
            else{
                min_open_br--;
                max_open_br++;
            }
            if(max_open_br<0){
                return false;
            }
            if(min_open_br<0){
                min_open_br=0;
            }

        }
        // cout<<open_br<<" "<<close_br<<'\n';
        return min_open_br==0;
    }
};
void solve() {
    Solution sol;
    string s;cin>>s;
    cout << sol.checkValidString(s) << '\n';
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