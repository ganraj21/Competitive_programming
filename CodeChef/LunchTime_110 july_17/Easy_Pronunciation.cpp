// Contest Code:LTIME110C Problem Code:EZSPEAK


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin>>n;
	    cin>>s;
	    
	    int count = 0;
	    for(int i=0;i<n;i++){
	        char ch = s[i];
	        
	        if(count>3){
	            break;
	        }
	        if(ch == 'a' || ch == 'e' || ch == 'i' || ch=='o' || ch=='u'){
	            count = 0;
	        }
	        else{
	            count++;
	        }
	    }
	    if(count>3){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
