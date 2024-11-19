#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	 int t;
	 cin>>t;
	 while(t--){
	     int A, B, C;
	     cin>>A>>B;
	     C= max(A%3 , B%3);
	     cout<<C<<endl;
	 }
	 
	 return 0;

}