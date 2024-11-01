
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
     int n;
    cin >> n;
    vector<long long> v(n);
    long long sum = 0;
    long long odd = INT_MAX;
    for (int i = 0; i < n; i++){
        cin >> v[i];

    }

    for(int i = 0 ;i<n ; i++){
      
        sum += v[i];

        if (v[i] % 2 != 0){
            odd = min(odd, v[i]);
        }
    }

    if (sum % 2 == 0){
        cout << sum << endl;
        
    }

    else{
        if (odd != INT_MAX){
            cout << sum - odd <<endl;
           
        }
        else
            cout << 0 << endl;
    }

    return 0;
}
