#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
	int ans = 1;
	if(a>b){
		for(int i=2;i<=b;i++){
			if(a%i==0 && b%i==0){
				ans = i;
			}
		}
		return ans;
	}
	else if(a==b){
		return a;
	}
	else{
		for(int i=2;i<=a;i++){
			if(a%i==0 && b%i==0){
				ans = i;
			}
		}
		return ans;
	}
}




int main(){
	int N;
	while(cin>>N){
		if (N==0){
			break;
		}
		int G = 0;
		for(int i=1; i<=N; i++){
			for(int j=i+1; j<=N; j++){
				G += GCD(i,j);
			}
		}
		cout<<G<<endl;
	}
	return 0;
} 
