#include<bits/stdc++.h>

using namespace std;

int main(){
	int table[9] = {0,10,100,1000,10000,10000,1000000,10000000,100000000};
	int n;
	while(cin>>n){
		for(int i=0;i*i<table[n];i++){
			int num = i * i;
			int k = num/table[n/2];
			int l = num%table[n/2];
			if((k+l)*(k+l)==num){
				 printf("%0*d\n",n,num,k,l);
			}
		}
	}
}
