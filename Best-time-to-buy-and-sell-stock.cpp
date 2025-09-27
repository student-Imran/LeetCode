#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int maxPrice = prices[0];
        int minPrice = prices[0];
        int profit = maxPrice - minPrice;
        int maximumProfit = 0;
        for(int i=1;i<len;i++){
           if(prices[i]<minPrice){
            minPrice=prices[i];
            maxPrice=prices[i];
           }
           else if(prices[i]>maxPrice or prices[i]>minPrice){
            maxPrice = prices[i];
            profit = maxPrice - minPrice;
           }
            maximumProfit = max(maximumProfit,profit);
        }
       
        return maximumProfit;
    }
};
void solve()
{
    vector<int>prices;
    int x;
    while(cin>>x){
    	prices.push_back(x);
    }
    Solution sol;
    cout<<sol.maxProfit(prices)<<'\n';
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