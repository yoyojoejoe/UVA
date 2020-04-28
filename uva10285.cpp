#include<bits/stdc++.h>
using namespace std;

int dp[100][100];
int graph[100][100];

int dfs(int x, int y){
	if(dp[x][y]){
		return dp[x][y];
	}
	if(!graph[x][y] or x<0 or y<0){
		return 0;
	}
	dp[x][y] = 1;
	int n_x = x+1;
	int n_y = y;
	if(graph[n_x][n_y]<graph[x][y]){
		dp[x][y] = max(dfs(n_x, n_y)+1, dp[x][y]);
	}
	n_x = x;
	n_y = y+1;
	
	if(graph[n_x][n_y]<graph[x][y]){
		dp[x][y] = max(dfs(n_x, n_y)+1, dp[x][y]);
	}
	n_x = x-1;
	n_y = y;
	if(graph[n_x][n_y]<graph[x][y]&&n_x>=0){
		dp[x][y] = max(dfs(n_x, n_y)+1, dp[x][y]);
	}
	n_x = x;
	n_y = y-1;
	if(graph[n_x][n_y]<graph[x][y]&&n_x>=0){
		dp[x][y] = max(dfs(n_x, n_y)+1, dp[x][y]);
	}
	return dp[x][y];
}

int main(){
	int n;
	cin>>n;
	while(n--){
		memset(dp,0,sizeof(dp));
		string s;
		int r,c;
		cin>>s>>r>>c;
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				cin>>graph[i][j];
			}
		}
		int ans = 0;
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				ans = max(dfs(i,j),ans);
			}
		}
		cout<<s<<": "<<ans<<endl;
	}
}

