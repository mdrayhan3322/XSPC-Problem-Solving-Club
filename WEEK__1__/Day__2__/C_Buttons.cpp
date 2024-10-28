#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;
    cin>>a>>b;
    int count=0;
    if(a>b){
        count += a;
        a--;
    }
    else{
        count += b;
        b--;
    }
    if(a>b){
        count += a;
        a--;
    }
    else{
        count += b;
        b--;
    }
    cout<<count<<endl;
    return 0;
}