
// Contest Code:LTIME110C Problem Code:LASTLEVELS




#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int c ;
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x<=3){
	        cout<<(x*y)<<endl;
	    }
	    else{
	        if(x%3==0){
	            c = ((x/3)-1);
	            cout<<((x*y)+(c*z))<<endl;
	        }
	        else{
	            c = (x/3);
	            cout<<((x*y)+(c*z))<<endl;
	        }
	    }
	}
	return 0;
}
