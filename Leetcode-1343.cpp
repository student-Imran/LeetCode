#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        vector<long long int>preffix_sum(n+1);
        preffix_sum[0]=arr[0];
        for(int i=1;i<n;i++){
            preffix_sum[i]= preffix_sum[i-1]+arr[i];
        }
        long long int sum = 0;
        int ans = 0;
        for(int i=0;i<=n-k;i++){
            if(i!=0){
                sum = preffix_sum[i+k-1]-preffix_sum[i-1];
            }
            else{
                sum=preffix_sum[i+k-1];
            }
            if((sum/k)>=threshold){
                ans++;
            } 
        }
        return ans;

    }
};
void solve() {
    Solution sol;
    vector<int>arr;
    arr = {11,13,17,23,29,31,7,5,2,3};
    int k = 3;
    int threshold = 5;
    sol.numOfSubarrays(arr,k,threshold);
}

int main() {
    int t = 1;
    while(t--) {
        solve();
    }
    return 0;
}
