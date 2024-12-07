#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        if(x%2 == 0 && x/2 == y){
            cout<<"YES"<<endl;
        } 
        else if(x%2!= 0 && (x/2) +1 ==y || x/2 == y){
            cout<<"yes"<<endl;
        } 
        else cout<<"NO"<<endl;
    }

    return 0;
}