#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long long fac1=1, fac2=1, ans;
    cin >> n;
    if (n==1){
        cout << 1 << endl;
    }
    else{
        for (int i=1; i<=(n-1); i++){
            fac1 *= i;
        }

        for (int i=1; i<=2*(n-1); i++){
            fac2 *= i;
        }

        ans = fac2/(fac1*fac1);
        cout << ans << endl;
    }
}
