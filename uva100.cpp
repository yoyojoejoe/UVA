#include<bits/stdc++.h>
using namespace std;

int ans;
int cycle_length(int a){
	if(a==1){
		return ans;
	}
	else if(a%2==0){
		ans++;
		cycle_length(a/2);
	}
	else{
		ans++;
		cycle_length(3*a+1);
	} 
}
int main(){
	long long int n1,n2;
	while(cin>>n1>>n2){
		int an = 0;
		if(n1<n2){
			for(int i=n1; i<=n2; i++){
				ans = 1;
				an = max(cycle_length(i),an);
			}
		}
		else{
			for(int i=n2; i<=n1; i++){
				ans = 1;
				an = max(cycle_length(i),an);
			}
		}
		cout<<n1<<" "<<n2<<" "<<an<<endl;
	}
} 

