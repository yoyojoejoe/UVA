#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int dp[76];
	memset(dp, 0, sizeof(dp));
	dp[0] =1;
	dp[1] =2;
	dp[2] =2;
	for(int i=3; i<76; i++){
		dp[i] = dp[i-2]+dp[i-3];
	}
	while(cin>>n){
		cout<<dp[n-1]<<endl;
	}
	return 0;
}
