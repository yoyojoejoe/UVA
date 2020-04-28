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
        int ans = 0;
		for(int i=0;i<len;i++){
			int a =num[i]%10+num[i]/10%10+num[i]/100%10+num[i]/1000%10;
			ans += a;
		}
		
        cout<<ans<<endl;
    }
    return 0;
}
