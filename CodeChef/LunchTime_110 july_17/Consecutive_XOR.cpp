// Problem Code:STRINGXOR
// Contest Code:LTIME110

#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin>>tt;
	while(tt--){
	  string s,t;
	  int n;
	  cin>>n>>s>>t;
	  
	  string zero_one = "", one_zero = "";
	  for(int i=0;i<n;++i){
	      if(i&1)
	         one_zero += '1', zero_one += '0';
	      else
	         one_zero += '0', zero_one += '1';
	  }
	  
	  int one = count(s.begin(),s.end(),'1');
	  
	  if(one){
	      
	      if(t == one_zero || t == zero_one){
	          if(s == t)
	             cout<<"YES";
	          else
	             cout<<"NO";
	      }
	      else
	         cout<<"YES";
	  }
	  else{
	      if(s==t)
	         cout<<"YES";
	      else
	         cout<<"NO";
	  }
	  cout<<"\n";
	  
	}
	return 0;
}
