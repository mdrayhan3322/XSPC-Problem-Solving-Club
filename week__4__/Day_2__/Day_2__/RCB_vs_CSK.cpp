#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;

    c = a-b;
    if(c>=18){
        cout<<"RCB"<<endl;
    }
    else cout<<"CSK"<<endl;
    return 0;
}