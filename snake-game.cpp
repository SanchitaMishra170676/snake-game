#include <bits/stdc++.h>
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

int height =20;
int width=25;
signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int i=0;i<height;i++){
    	cout<<'X';
    	for(int j=0;j<width-2;j++){
    		if(i==0 || i== height-1){
    			cout<<"x";
    		}
    		else
    		cout<<" ";
    	}
    	cout<<'x';
    	cout<<"\n";
    }
} 