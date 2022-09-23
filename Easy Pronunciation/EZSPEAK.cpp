#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	
	while(t--){
	int n;
	cin>>n; 
	
    string str;
    cin>>str;

	int cnt=0;
	int finish=0;
	for(int i=0;i<n;i++){
	    char ch=str[i];
	    if(ch== 'a' || ch=='e' || ch== 'i' || ch == 'o' || ch== 'u'){
	        
        cnt=0;	        
	        
	    }else{
	       cnt++;
	       if(cnt>=4){
	           finish=1;
	       }
	}}
	if(finish==1){
	    cout<<"NO \n";
	}else{
	    cout<<"YES \n";
	}}
	
	return 0;
}
