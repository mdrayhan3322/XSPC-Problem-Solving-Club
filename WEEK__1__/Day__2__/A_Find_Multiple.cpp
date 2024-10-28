#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int multi = b/c*c;
    // multi = multi*c;
  
    if(a<=multi && b>=multi){
        cout<<multi<<endl;
    }
    else cout<<"-1";



}