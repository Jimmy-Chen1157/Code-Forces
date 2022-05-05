#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n, m;
        cin >> n >> m;
        long long a[n], s=0;

        for (int i=0; i<n; i++){
            cin >> a[i];
            s+=a[i];
        }
        if (n>m){
            cout << "NO" << endl;
            continue;
        }
        sort(a, a+n);
        s = s - a[0] + a[n-1];
        s += n;
        if (s > m){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}
