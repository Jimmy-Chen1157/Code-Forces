#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, _max=0, count=0;
    cin >> n;
    int a[n], b[n];
    for (int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    for (int i=0; i<n; i++){
        count -= a[i];
        count += b[i];
        _max = max(count, _max);
    }
    cout << _max;
}
