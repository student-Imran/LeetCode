#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
long long minHour(vector<int>&piles,long long k){
    long long ans = 0;
    for(int i=0;i<piles.size();i++){
        if(piles[i]%k==0){
            ans+=(piles[i]/k);
        }
        else{
            ans+=(piles[i]/k);
            ans++;
        }
    }
    return ans;
}
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_ele = *max_element(piles.begin(),piles.end());
        int l=1;
        int r=max_ele;
        int final_ans=0;
        while(l<=r){
            long long  mid = (l+r)/2LL;
            long long reqHour = minHour(piles,mid);
            if(reqHour<=h){
                final_ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return final_ans;
    }
};
void solve()
{
    vector<int>piles;
    int x;
    while(cin>>x){
        piles.push_back(x);
        if(cin.peek()=='\n') break;
    }
    Solution sol;
    int n;
    cin>>n;

    cout<<sol.minEatingSpeed(piles,n)<<'\n';
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