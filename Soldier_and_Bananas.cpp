#include<bits/stdc++.h>

using namespace std;

int main(){

    int k, n, w, sum;
    cin >> k >> n >> w;

    sum = k*(w+1)*w/2;
    if (sum > n){
        cout << sum-n;
    }
    else{
        cout << 0;
    }

}
