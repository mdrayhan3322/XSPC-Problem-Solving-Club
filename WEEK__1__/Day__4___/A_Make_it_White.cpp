#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t;
     cin>>t;
     while(t--)
     {  
        int n;
        cin>>n;
        string s;
        cin>>s;
        int start =0, end= 0;
        for(int i = 0 ; i<n ; i++) {
            if(s[i]=='B' && start ==0)
            {
                start = i+1;
            }
            if(s[i] == 'B' && start != 0)
            {
                end = i+1;
            }
        }
        int num = abs(start - end)+1;
        if(start-end == 0){
            num = 1;
        }
        cout<<num<<endl;
     }
    return 0;
}