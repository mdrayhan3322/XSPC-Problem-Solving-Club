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
        vector<int>v(n);
        for(int i = 0 ; i<n ; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans = INT_MAX;
        vector<int>x = v;
        
        x.pop_back();
        x.pop_back();
        ans = min(x.back() - x.front(), ans);
        x=v;
        
        ans= min(x.back()-x[2],ans);
        ans = min(x[n-2] - x[1],ans);
        cout<<ans<<endl;
     }
    return 0;
}