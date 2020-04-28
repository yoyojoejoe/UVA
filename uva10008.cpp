#include<bits/stdc++.h>
using namespace std;

int a[26];
int f(){
	int temp = 0;
	int ans;
	for(int i = 0; i<26; i++){
		if(a[i]>temp){
			temp = a[i]; 
			ans = i;
		}
	}	
	return ans;
}
void s_to_n(char c){
	int q = int(c);
	if(q>=97&&q<=122){
		q = q-97;
		a[q]++;
	}
	else if(q>=65&&q<=90){
		q = q - 65;
		a[q]++;
	}
	else {
		return;
	}
}
int main(){
	memset(a,0,sizeof(a));
	int t;
	cin>>t;
	t++;
	string s;
	while(t--){
		getline(cin,s);
		for(int i =0; i<s.length(); i++ ){
			s_to_n(s[i]);
		}
	}
	for(int i=0; i<26;i++){
		if(a[f()]==0){
			break;
		}
		else{
			char an = 'A'+f();
			cout<<an<<" "<<a[f()]<<endl;
			a[f()] = 0;
		}
	}
	return 0;
}
