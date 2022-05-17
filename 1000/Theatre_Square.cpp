#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n, m, a;
    cin >> n >> m >> a;
    long long w = n/a, h = m/a;
    if (n%a != 0){
        w += 1;
    }
    if (m%a != 0){
        h += 1;
    }

    cout << w*h;
}
