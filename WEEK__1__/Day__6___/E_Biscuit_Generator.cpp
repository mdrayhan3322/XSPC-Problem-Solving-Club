
#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     int n,m,p;
    cin>> n>> m>> p;
    int cnt = 0;
    int bis = (p+.5)/n;
    cout<<bis * m;
    return 0;
}
