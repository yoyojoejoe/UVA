#include<bits/stdc++.h>
using namespace std;

int main(){
	int high[10005] = {0};
	int l,r,h;
	int max_r = 0;
	while(cin>>l>>h>>r){
		for(int i=l;i<r;i++){
		high[i] = max(h,high[i]);
		}
		max_r = max(r,max_r);
	}
	cout<<"1"<<" "<<high[1]<<" ";
	for(int i=2;i<=max_r;i++){
		if(high[i-1]!=high[i]){
			cout<<i<<" "<<high[i]<<" ";
		}
	}	
	return 0;
}
