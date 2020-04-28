#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		int c = 1;
		for(int i=1; i<=n; i++){
			c *= i;
			while(c%10==0){
				c = c/10;
			}
			c%=100000;
		}
		if(n<10){
			cout<<"    "<<n<<" -> "<<c%10<<endl;
		}
		else if(n<100){
			cout<<"   "<<n<<" -> "<<c%10<<endl;
		}
		else if(n<1000){
			cout<<"  "<<n<<" -> "<<c%10<<endl;
		}
		else if(n<10000){
			cout<<" "<<n<<" -> "<<c%10<<endl;
		}
		else{
			cout<<n<<" -> "<<c%10<<endl;
		}
	}
	return 0;
}
