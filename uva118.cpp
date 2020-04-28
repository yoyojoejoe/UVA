#include<bits/stdc++.h>
using namespace std;

int direction = 1;
char num_to_dir(int x){
	switch(x){
		case 1:
			return 'N';
			break;
		case 2:
			return 'E';
			break;
		case 3:
			return 'S';
			break;
		case 4:
			return 'W';
			break;
	}
}
void init_direction(char c){
	if(c == 'N'){
		direction = 1;
		return;
	}
	else if(c == 'E'){
		direction = 2;
		return;
	}
	else if(c == 'S'){
		direction = 3;
		return;
	}
	else if( c== 'W'){
		direction = 4;
		return;
	}
	else{
		return;
	}
	
}
void rotate(char c){
	if(c == 'R'){
		direction += 1;
		if(direction == 5){
			direction = 1; 
		}
		return;
	}
	else if(c == 'L'){
		direction -= 1;
		if(direction == 0){
			direction = 4;
		}
		return;
	}
	else{
		return;
	}
}
int main(){
	int x,y;
	cin>>x>>y;
	char c;
	int ix,iy;
	bool tag[x+1][y+1];
	memset(tag, false, sizeof(tag));
	while(cin>>ix>>iy>>c){
		bool cheack = false;
		string s;
		cin>>s;
		init_direction(c);
		for(int i=0; i<s.length(); i++){
			if(s[i]!='F'){
				rotate(s[i]);
			}
			else{
				switch(direction){
					case 1:
						iy ++;
						break;
					case 2:
						ix ++;
						break;
					case 3:
						iy --;
						break;
					case 4:
						ix --;
						break;
				}
			}
			if(ix>x){
				ix--;
				if(!tag[ix][iy]){
					tag[ix][iy] = true;
					cheack = true;
					break;
				}
			}
			else if(ix<0){
				ix++;
				if(!tag[ix][iy]){
					tag[ix][iy] = true;
					cheack = true;
					break;
				}
			}
			else if(iy>y){
				iy --;
				if(!tag[ix][iy]){
					tag[ix][iy] = true;
					cheack = true;
					break;
				}
			}
			else if(iy<0){
				iy ++;
				if(!tag[ix][iy]){
					tag[ix][iy] = true;
					cheack = true;
					break;
				}

			}
		}
		cout<<ix<<" "<<iy<<" "<<num_to_dir(direction);
		if(cheack){
			cout<<" Lost"<<endl;
		}
		else{
			cout<<endl;
		}
	}
} 
