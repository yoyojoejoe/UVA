#include<bits/stdc++.h>
using namespace std;


int main(){
	int z;
	int times = 0;
	while(cin>>z){
		int t[26];
		int ans = 0;
		string s;
		while(z--){
			memset(t,0,sizeof(t));
			cin>>s;
			for(int i=0; i<s.length(); i++){
				t[int(s[i])-97]++;
			}
			bool cheack = true;
			for(int i=0;i<26;i++){
				bool c = true;
				for(int j=i;j<26;j++){
					if(t[j]==t[i] && i!=j && t[j]!=0){
						c = false;
						break;
					}
				}
				if(!c){
					cheack = false;
					break;
				}
			}
			if(s.length() ==1){
				cheack = false;
			}
			if(cheack){
				ans++;
			}
		}
		cout<<"Case "<<++times<<": "<<ans;
	}
}
