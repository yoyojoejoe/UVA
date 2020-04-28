#include<bits/stdc++.h>
using namespace std;


int reverse(int a){
	string s;
	stringstream ss(s);
	cout<<ss.str().length();
	string sss = "";
	for(int i =ss.str().length();i>=0; i++){
		sss += ss.str()[i];
	}
	int i = atoi(sss.c_str());
	return i;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,ans = 0;
		cin>>a;
		int s = reverse(a);
		while(s!=a){
			ans++;
			a = a +s;
			s = reverse(a);
		}
		cout<<ans<<" "<<a<<endl;
	}
}
