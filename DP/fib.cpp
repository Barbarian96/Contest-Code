#include<bits/stdc++.h>
using namespace std;

int dp[31];

int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = fib(n-1)+fib(n-2);
}

int main(){
    memset(dp,-1,sizeof(dp));
    int n;
    cin >> n;
    cout << fib(n);
}
