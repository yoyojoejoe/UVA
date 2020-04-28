#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		const long long int up_forward = 6227020800;
		const long long int down_forward = 10000;
		if( n < 0 ){
      		if( n % 2 == 0 ){
        	cout<<"Underflow!"<<endl;
      		}
      	else{
        	cout<<"Overflow!"<<endl;
      		}
    	}
    	else{
    		long long int ans = 1;
    		for(int i=2; i<=n; i++){
    			ans *= i;
    			if(ans > up_forward){
    				cout<<"Overflow!"<<endl;
    				break;
				}
			}
			if(ans < down_forward){
				cout<<"Underflow!"<<endl;
			}
			else if(ans >= down_forward && ans <= up_forward){
				cout<<ans<<endl;
			}
		}
		
	}
	return 0;
}
