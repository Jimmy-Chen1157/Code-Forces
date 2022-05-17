#include <bits/stdc++.h>

using namespace std;

int main(){

    int testcases, n;

    cin >> testcases;

    for (int epoch=0; epoch<testcases; epoch++){
        cin >> n;
        long long ans = pow(2,n)-1;
        printf("%lld", ans);
        cout << endl;
    }

}
