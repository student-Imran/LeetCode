#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
bool isPossible(vector<int>&bloomDay,int m,int k,int day){
          int adj = 0;
          int ans = 0;
          for(int i=0;i<bloomDay.size();i++){
                 if(bloomDay[i]<=day){
                    adj++;
                    if(adj==k){
                        ans++;
                        adj=0;
                        if(ans==m){
                            return true;
                        }
                    }
                 }
                 else{
                    adj=0;
                 }
          }
          return false;
}
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int maxElement = *max_element(bloomDay.begin(),bloomDay.end());
        int l =1,r=maxElement;
        int minimumDays = -1;
        while(l<=r){
            long long int mid = (l+r)/2LL;
            if(isPossible(bloomDay,m,k,mid)){
                 r = mid-1;
                 minimumDays = mid;
            }else{
                l=mid+1;
            }
        }
        return minimumDays;
    }
};
void solve() {
    Solution sol;
    vector<int> bloomDay;
    int x;
    while(cin >> x) {
        bloomDay.push_back(x);
        if(cin.peek() == '\n') break; 
    }
    int m,k;cin>>m>>k;
    cout<<sol.minDays(bloomDay,m,k)<<'\n';
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