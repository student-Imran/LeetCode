#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    string largestGoodInteger(string num) {
        int size = num.size();
        string str = "";
        int ans_int;
        int maxInt = -1;
        for(int i=0;i<=size-3;i++){
            if(num[i]==num[i+1] and num[i+1]==num[i+2]){
                str+=num[i];
                str+=num[i+1];
                str+=num[i+2];
                ans_int = stoi(str);
                maxInt = max(ans_int,maxInt);
                str = "";
            }
        }
        if(maxInt==0){
            return "000";
        }
        else if(maxInt==-1){
            return "";
        }
        return to_string(maxInt);
    }
};
void solve() {
    Solution sol;
    string num = "2300019";
    sol.largestGoodInteger(num);
}

int main() {
    int t = 1;
    while(t--) {
        solve();
    }
    return 0;
}
