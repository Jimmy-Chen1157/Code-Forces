#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, num;
        long long size;
        cin >> n >> m;
        size = n*m;
        num = size/2 + size%2;
        cout << num << endl;
    }

}
