#include<bits/stdc++.h>
using namespace std;

int main(){
	int h1,h2,m1,m2;
	while(cin>>h1>>m1>>h2>>m2){
		if(h1==0&&h2==0&&m1==0&&m2==0){
			break;
		}
		int ans_m,ans_h;
		if(m2>=m1){
			ans_m = m2-m1;
		}
		else{
			if(h1==23){
				h1=0;
			}
			else{
				h1++;
			}
			ans_m = (60-m1+m2);
		}
		if(h2>=h1){
			ans_h = h2-h1;
		}
		else{
			ans_h = h2-h1+24;
		}
		cout<<ans_h*60+ans_m<<endl;
	}
}
