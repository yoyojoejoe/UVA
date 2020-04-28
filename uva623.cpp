#include<bits/stdc++.h>

using namespace std;


int main() {
	int num[1001];
    int n,len;
    while(cin>>n){
        memset(num, 0, sizeof(num));
        num[0] = 1;
        len = 1;
        for(int i=2;i<=n;i++){
            int c = 0;
            for(int j=0;j<len;j++){
                num[j] *= i;
                num[j] += c;
                c  = num[j] / 10000; 
                num[j] %= 10000;
            }
            if(c > 0)
                num[len++] = c;
        }
        cout<<n<<'!'<<endl;
        cout<<num[len-1];
        for(int i=len-2;i>=0;i--){
        	if(num[i]<10){
        		cout<<'0'<<'0'<<'0'<<num[i];
			} 
			else if(num[i]<100){
				cout<<'0'<<'0'<<num[i];
			}
			else if(num[i]<1000){
				cout<<'0'<<num[i];
			}
			else{
				cout<<num[i];
			
			}
		}
        cout<<endl;
    }



    return 0;
}
