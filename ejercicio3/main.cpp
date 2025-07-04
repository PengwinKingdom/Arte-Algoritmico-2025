#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=8,m=4;
	int big=(n-m)/2,small=big+m;
	
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        if(i>=big && i<small && j>=big && j<small){
	            cout<<"🦋"<<" ";
	        }else{
	            cout << ((i + j) % 2 == 0 ? "🌸" : "🌼") << " ";

	        }
	    }
	    cout<<endl;
	}

}
