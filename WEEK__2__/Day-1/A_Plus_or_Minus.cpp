

#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int test;
     cin>>test;
     while(test--)
     {

        
    int a,b,c;
        cin>>a>>b>>c;
        if((a+b)==c) cout<<"+"<<endl;
        else {
            cout<<"-"<<endl;
        }
     }
    return 0;
}